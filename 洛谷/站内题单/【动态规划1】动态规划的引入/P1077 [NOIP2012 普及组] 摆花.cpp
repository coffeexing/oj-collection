#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1000007;

int n, m;
vector<int> flower(105);
vector<int> dp(105, 0);

int solve() {
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = m; j > 0; j--) {
			for (int k = 1; k <= min(flower[i], j); k++) {
				dp[j] = (dp[j] + dp[j - k]) % MOD;
			}
		}
	}
	return dp[m];
}

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &flower[i]);
	}
	cout << solve();
	return 0;
}
