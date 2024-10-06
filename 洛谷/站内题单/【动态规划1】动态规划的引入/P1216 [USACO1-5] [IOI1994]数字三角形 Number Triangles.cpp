#include <iostream>
#include <vector>
using namespace std;

int r;
vector<vector<int>> nums(1);
vector<vector<int>> dp(1);

int solve(int i, int j) {
	if (i == r) {
		return nums[i][j];
	}
	if (dp[i][j] >= 0) {
		return dp[i][j];
	}
	return dp[i][j] = max(solve(i + 1, j), solve(i + 1, j + 1)) + nums[i][j];
}

int main() {
	scanf("%d", &r);
	for (int i = 1; i <= r; i++) {
		vector<int> t1(i + 2);
		vector<int> t2(i + 2, -1);
		for (int j = 1; j <= i; j++) {
			scanf("%d", &t1[j]);
		}
		nums.push_back(t1);
		dp.push_back(t2);
	}
	cout << solve(1, 1);
	
	return 0;
}
