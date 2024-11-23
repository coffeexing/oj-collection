#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <unordered_set>

using namespace std;

struct Point {
    int x, y;
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
    bool operator<(const Point& other) const {
        return x < other.x || (x == other.x && y < other.y);
    }
};

struct Chessboard {
    vector<Point> p{Point(), Point(), Point(), Point()};

    bool operator==(const Chessboard& other) const {
        return p == other.p;
    }
};

struct ChessboardHash {
    size_t operator()(const Chessboard& c) const {
        size_t hash = 0;
        for (const auto& p : c.p) {
            hash ^= (std::hash<int>()(p.x) ^ (std::hash<int>()(p.y) << 1));
        }
        return hash;
    }
};

int mx[4] = {0, 1, 0, -1};
int my[4] = {1, 0, -1, 0};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Chessboard start, stop;
    while (cin >> start.p[0].x >> start.p[0].y) {
        for (int i = 1; i < 4; ++i) {
            cin >> start.p[i].x >> start.p[i].y;
        }
        for (int i = 0; i < 4; ++i) {
            cin >> stop.p[i].x >> stop.p[i].y;
        }

        bool flag = false;
        sort(start.p.begin(), start.p.end());
        sort(stop.p.begin(), stop.p.end());

        deque<Chessboard> q1, q2;
        q1.push_back(start);
        q2.push_back(stop);
        unordered_set<Chessboard, ChessboardHash> v1, v2;
        v1.insert(start);
        v2.insert(stop);

        int t = 8; // 最大步数限制

        while (t-- && !q1.empty() && !q2.empty()) {
            if (q1.size() > q2.size()) { // 优先扩展较小队列
                swap(q1, q2);
                swap(v1, v2);
            }

            int s1 = q1.size();
            while (s1--) {
                Chessboard c1 = q1.front();
                q1.pop_front();

                if (v2.find(c1) != v2.end()) { // 检查交集
                    flag = true;
                    break;
                }

                for (int i = 0; i < 4; ++i) {
                    for (int j = 0; j < 4; ++j) {
                        Point curr = c1.p[i];
                        Point np{curr.x + mx[j], curr.y + my[j]};
                        if (find(c1.p.begin(), c1.p.end(), np) != c1.p.end()) {
                            np = {np.x + mx[j], np.y + my[j]};
                        }
                        if (np.x >= 1 && np.y >= 1 && np.x <= 8 && np.y <= 8) {
                            Chessboard nc = c1;
                            nc.p[i] = np;
                            sort(nc.p.begin(), nc.p.end());
                            if (v1.find(nc) == v1.end()) {
                                q1.push_back(nc);
                                v1.insert(nc);
                            }
                        }
                    }
                }
            }
            if (flag) break;
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
