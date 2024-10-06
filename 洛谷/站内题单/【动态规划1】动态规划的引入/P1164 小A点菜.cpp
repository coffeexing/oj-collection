#include <iostream>
#include <vector>
using namespace std;
using ll = long long int;

int N, M;
vector<int> dishes(105);
vector<int> dp(10005, 0);

int solve() {
	dp[0] = 1;
	for (int i = 1; i <= N; i++) {
		for (int j = M; j >= dishes[i]; j--) {
			dp[j] = dp[j] + dp[j - dishes[i]];
		}
	}
	return dp[M];
}

int main() {
	scanf("%d%d", &N, &M);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &dishes[i]);
	}
	
	cout << solve();
	
	return 0;
}
