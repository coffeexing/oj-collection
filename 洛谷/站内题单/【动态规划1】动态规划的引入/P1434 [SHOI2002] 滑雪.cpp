#include <iostream>
#include <vector>
using namespace std;

int r, c;
int map[105][105];
int dp[105][105] = {0};
int mx[4] = {1, -1, 0 ,0};
int my[4] = {0, 0, 1, -1};

int dfs(int x, int y) {
	if (dp[x][y] != 0) {
		return dp[x][y];
	}
	
	dp[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + mx[i];
		int ny = y + my[i];
		if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
			continue;
		} else {
			if (map[x][y] > map[nx][ny]) {
				int temp = 1 + dfs(nx, ny);
				dp[x][y] = max(dp[x][y], temp);
			}
		}
	}
	return dp[x][y];
}

int main() {
	scanf("%d%d", &r, &c);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &map[i][j]);
		}
	}
	int maxL = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			int temp = dfs(i, j);
			maxL = max(maxL, temp);
		}
	}
	cout << maxL;
	return 0;
}
