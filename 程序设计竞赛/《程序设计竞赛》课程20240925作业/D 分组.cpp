#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> dp(n, 0);
    vector<int> sum(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum[i] += sum[i - 1] + v[i];
        if (sum[i] >= 0) {
            dp[i] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (dp[j] > 0 && sum[i] - sum[j] >= 0) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    if (dp[n - 1] == 0) {
        cout << "Impossible" << endl;
    } else {
        cout << dp[n - 1] << endl;
    }

    return 0;
}
