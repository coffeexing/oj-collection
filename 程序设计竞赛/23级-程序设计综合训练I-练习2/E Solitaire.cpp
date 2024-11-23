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
        return x < other.x || x == other.x && y < other.y;
    }
};

struct Chessboard {
    vector<Point> p{Point(), Point(), Point(), Point()};
    bool operator==(const Chessboard& other) const {
        vector<Point> sorted_p = p;
        vector<Point> sorted_other_p = other.p;
        sort(sorted_p.begin(), sorted_p.end());
        sort(sorted_other_p.begin(), sorted_other_p.end());
        return sorted_p == sorted_other_p;
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


int mx[4] = {0, 1, 0 , -1};
int my[4] = {1, 0, -1, 0};

int main() {
    Chessboard start, stop;
    while (scanf("%d%d", &start.p[0].x, &start.p[0].y) != EOF) {
        for (int i = 1; i < 4; ++i) {
            scanf("%d%d", &start.p[i].x, &start.p[i].y);
        }

        for (int i = 0; i < 4; ++i) {
            scanf("%d%d", &stop.p[i].x, &stop.p[i].y);
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

        int t = 8;

        while (t--) {

            int s1 = q1.size();
            int s2 = q2.size();

            if (s1 < s2) {
                while (s1--) {
                    Chessboard c1 = q1.front();
                    q1.pop_front();
                    if (v2.find(c1) != v2.end()) {
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
                            if (np.x >= 1 && np.y >=1 && np.x <= 8 && np.y <= 8) {
                                if (find(c1.p.begin(), c1.p.end(), np) == c1.p.end()) {
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
                }
            } else {
                while (s2--) {
                    Chessboard c2 = q2.front();
                    if (v1.find(c2) != v1.end()) {
                        flag = true;
                        break;
                    }
                    q2.pop_front();
                    for (int i = 0; i < 4; ++i) {
                        for (int j = 0; j < 4; ++j) {
                            Point curr = c2.p[i];
                            Point np{curr.x + mx[j], curr.y + my[j]};
                            if (find(c2.p.begin(), c2.p.end(), np) != c2.p.end()) {
                                np = {np.x + mx[j], np.y + my[j]};
                            }
                            if (np.x >= 1 && np.y >=1 && np.x <= 8 && np.y <= 8) {
                                if (find(c2.p.begin(), c2.p.end(), np) == c2.p.end()) {
                                    Chessboard nc = c2;
                                    sort(nc.p.begin(), nc.p.end());
                                    nc.p[i] = np;
                                    if (v2.find(nc) == v2.end()) {
                                        q2.push_back(nc);
                                        v2.insert(nc);
                                    }
                                }
                            }
                        }
                    }
                }
            }

            if (flag) {
                printf("YES\n");
                break;
            }
        }

        if (!flag) {
            printf("NO\n");
        }
    }

    return 0;
}
