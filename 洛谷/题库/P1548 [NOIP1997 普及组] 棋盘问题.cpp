#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, s_cnt = 0, r_cnt = 0;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (i == j) {
                s_cnt += (N - i + 1) * (M - j + 1);
            } else {
                r_cnt += (N - i + 1) * (M - j + 1);
            }
        }
    }
    cout << s_cnt << " " << r_cnt << endl;

    return 0;
}