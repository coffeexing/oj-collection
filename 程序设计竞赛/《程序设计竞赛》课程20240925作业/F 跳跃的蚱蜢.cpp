#include <bits/stdc++.h>
using namespace std;

long long h[1000005];
long long dp[1000005][2];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    for (int i = 1; i <= n; i++) {
        dp[i][0] = min(dp[i - 1][0], dp[i - 1][1]) + h[i];
        if (i >= 2) {
            dp[i][1] = min(dp[i - 1][0], dp[i - 2][0]);
        }
    }

    cout << min(dp[n][0], dp[n][1]);

    return 0;
}