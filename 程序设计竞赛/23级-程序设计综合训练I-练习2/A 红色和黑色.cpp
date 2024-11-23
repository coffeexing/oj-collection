#include <iostream>
#include <deque>
using namespace std;

struct Point {
    int x, y;
};

int mx[4] = {0, 1, 0 , -1};
int my[4] = {1, 0, -1, 0};
char room[50][50];

int main() {
    int W, H;
    while (cin >> W >> H && W && H) {
        int cnt = 1;
        Point start{};

        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                cin >> room[i][j];
                if (room[i][j] == '@') {
                    start.x = i;
                    start.y = j;
                }
            }
        }

        deque<Point> q;
        room[start.x][start.y] = '#';
        q.push_back(start);
        while (!q.empty()) {
            Point curr = q.front();
            q.pop_front();

            for (int i = 0; i < 4; ++i) {
                Point newp = {curr.x + mx[i], curr.y + my[i]};
                if (newp.x >= 0 && newp.y >= 0 && newp.x < H && newp.y < W) {
                    if (room[newp.x][newp.y] != '#') {
                        q.push_back(newp);
                        room[newp.x][newp.y] = '#';
                        cnt++;
                    }
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
