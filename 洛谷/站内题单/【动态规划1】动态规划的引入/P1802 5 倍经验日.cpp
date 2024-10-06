#include <iostream>
#include <vector>
using namespace std;
using ll = long long int;

struct Friend {
	int lose, win, use;
};

int n, x;
vector<Friend> fr(1005);
vector<vector<ll>> dp(1005, vector<ll>(1005, 0));

ll solve() {
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= x; j++) {
			if (fr[i].use > j) {
				dp[i][j] = dp[i - 1][j] + fr[i].lose;
			} else {
				dp[i][j] = max(dp[i - 1][j] + fr[i].lose, 
					dp[i - 1][j - fr[i].use] + fr[i].win);
			}
		}
	}
	return dp[n][x];
}

int main(){
	scanf("%d%d", &n, &x);
	for (int i = 1; i <= n; i++) {
		int l, w, u;
		scanf("%d%d%d", &l, &w, &u);
		fr[i] = {l, w, u};
	}
	cout << 5 * solve();
	return 0;
}

