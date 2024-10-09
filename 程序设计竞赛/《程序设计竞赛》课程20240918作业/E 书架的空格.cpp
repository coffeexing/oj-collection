#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> P(N);
    vector<int> B(M + 1);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }
    for (int i = 0; i <= M; ++i) {
        cin >> B[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

    // Fill the dp array
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= K; ++j) {
            for (int k = 0; k <= min(j, M - P[i - 1]); ++k) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - k] + B[k + P[i - 1]]);
            }
        }
    }

    int maxHappiness = *max_element(dp[N].begin(), dp[N].end());
    cout << maxHappiness << endl;

    return 0;
}
