#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<vector<int>> board;
void dfs(int x, int y, int depth) {
	if(x < 0 || x >= n || y < 0 || y >= m) {
		return;
	}
	if(board[x][y] != -1 && board[x][y] <= depth){
		return;
	}
	board[x][y] = depth;
	dfs(x + 2, y + 1, depth + 1);
	dfs(x + 1, y + 2, depth + 1);
	dfs(x - 1, y + 2, depth + 1);
	dfs(x - 2, y + 1, depth + 1);
	dfs(x - 2, y - 1, depth + 1);
	dfs(x - 1, y - 2, depth + 1);
	dfs(x + 1, y - 2, depth + 1);
	dfs(x + 2, y - 1, depth + 1);
}

int main() {
	int x, y;
	scanf("%d%d%d%d", &n, &m, &x, &y);
	board = vector<vector<int>>(n, vector<int>(m, -1));
	dfs(x - 1, y - 1, 0);
	for(auto& vec : board){
		for(int num : vec){
			printf("%-5d ", num);
		}
		printf("\n");
	}
}
