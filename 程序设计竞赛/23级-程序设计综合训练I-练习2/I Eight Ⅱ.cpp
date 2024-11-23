#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int mx[4] = {0, 1, 0 , -1};
int my[4] = {1, 0, -1, 0};

struct Step {
    string steps;
    char board[3][3];
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        Step start, stop;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                start.board[i][j] = getchar();
            }
        }

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                stop.board[i][j] = getchar();
            }
        }

//        while ()

    }

    return 0;
}
