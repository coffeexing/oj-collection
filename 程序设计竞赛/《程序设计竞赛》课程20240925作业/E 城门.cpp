#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<long long> v(n + 5);
    vector<long long> sum(n + 5, 0);
    vector<long long> dp(n + 5, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        sum[i] = sum[i - 1] + v[i];
    }

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1] + v[i] * n * n;
        for (int j = 1; j < i; j++) {
            if (v[i] + v[j] <= t) {
                dp[i] = min(dp[i], dp[j - 1] + (v[i] + v[j]) * (sum[i] - sum[j - 1]));
            }
        }
    }

    cout << dp[n];

    return 0;
}
