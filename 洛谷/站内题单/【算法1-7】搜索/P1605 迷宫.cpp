#include <iostream>
#include <vector>
using namespace std;

int N, M, T;
int SX, SY, FX, FY;

int dfs(int x, int y, vector<vector<int>> map) {
	if (x < 0 || x >= N || y < 0 || y >= M) {
		return 0;
	}
	if (map[x][y] == -1 || map[x][y] == 1) {
		return 0;
	}
	if (x == FX - 1 && y == FY - 1) {
		return 1;
	}
	map[x][y] = 1;
	
	int cnt = 0;
	int moveX[4] = {1, -1, 0, 0};
	int moveY[4] = {0, 0, 1, -1};
	for (int i = 0; i < 4; i++) {
		int newX = x + moveX[i];
		int newY = y + moveY[i];
		cnt += dfs(newX, newY, map);
	}
	return cnt;
}

int main() {
	scanf("%d%d%d", &N, &M, &T);
	scanf("%d%d%d%d", &SX, &SY, &FX, &FY);
	vector<vector<int>> map(N, vector<int>(M, 0));
	for (int i = 0; i < T; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		map[x - 1][y - 1] = -1;
	}
	int res = dfs(SX - 1, SY - 1, map);
	printf("%d", res);
	
	return 0;
}
