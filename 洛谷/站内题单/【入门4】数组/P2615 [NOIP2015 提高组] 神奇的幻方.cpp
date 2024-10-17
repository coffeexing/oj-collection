#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> matrix(N, vector<int>(N, 0));

    int x = 0, y = N / 2;
    matrix[x][y] = 1;

    for (int i = 2; i <= N * N; i++) {
        if (x == 0 && y != N - 1) {
            x = N - 1;
            y = y + 1;
        } else if (x != 0 && y == N - 1) {
            x = x - 1;
            y = 0;
        } else if (x == 0 && y == N - 1) {
            x = x + 1;
        } else if (x != 0 && y != N - 1) {
            if (matrix[x - 1][y + 1] == 0) {
                x = x - 1;
                y = y + 1;
            } else {
                x = x + 1;
            }
        }

        matrix[x][y] = i;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}