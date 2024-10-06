#include <iostream>
#include <vector>
using namespace std;

int V, n;
vector<int> goods(35, 0);
vector<vector<int>> dp(35, vector<int>(20005, 0));

int solve() {
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= V; j++) {
			if (goods[i] <= j) {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - goods[i]] + goods[i]);
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		} 
	}
	return dp[n][V];
}

int main() {
	scanf("%d%d", &V, &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &goods[i]);
	}
	cout << V - solve();
	
	return 0;
}
