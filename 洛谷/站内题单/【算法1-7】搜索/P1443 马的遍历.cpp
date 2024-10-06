#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<vector<int>> board;
void bfs(int startX, int startY) {
	queue<pair<int, int>> q;
	q.push({startX, startY});
	board[startX][startY] = 0;
	
	int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
	int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
	
	while(!q.empty()){
		auto [x, y] = q.front();
		q.pop();
		for(int i = 0; i < 8; i++) {
			int newX = x + dx[i];
			int newY = y + dy[i];
			if(newX < 0 || newX >= n || newY < 0 || newY >= m) {
				continue;
			}
			if(board[newX][newY] != -1){
				continue;
			}
			board[newX][newY] = board[x][y] + 1;
			q.push({newX, newY});
		}
	}
}

int main() {
	int x, y;
	scanf("%d%d%d%d", &n, &m, &x, &y);
	board = vector<vector<int>>(n, vector<int>(m, -1));
	bfs(x - 1, y - 1);
	for(auto& vec : board){
		for(int num : vec){
			printf("%-5d ", num);
		}
		printf("\n");
	}
}
