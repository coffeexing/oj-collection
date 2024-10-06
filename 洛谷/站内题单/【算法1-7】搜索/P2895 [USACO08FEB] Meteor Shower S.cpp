#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct State {
	int x, y;
	int time;
};

int main() {
	int M, x, y, t;
	scanf("%d", &M);
	int moveX[4] = {1, -1, 0 , 0};
	int moveY[4] = {0 , 0 ,1, -1};
	vector<vector<int>> map(350, vector<int>(350, -1));
	vector<vector<int>> step(350, vector<int>(350, -1));
	for (int i = 0; i < M; i++) {
		scanf("%d%d%d", &x, &y, &t);
		if(map[x][y] == -1 || map[x][y] > t) {
			map[x][y] = t;
		}
		for (int j = 0; j < 4; j++) {
			int newX = x + moveX[j];
			int newY = y + moveY[j];
			if (newX >= 0 && newY >= 0 && (map[newX][newY] == -1 || map[newX][newY] > t)) {
				map[newX][newY] = t;
			}
		}
	}
	
	queue<State> q;
	State start;
	start.x = 0;
	start.y = 0;
	start.time = 0;
	q.push(start);
	step[0][0] = 0;
	
	while (!q.empty()) {
		State curr = q.front();
		x = curr.x;
		y = curr.y;
		q.pop();
		
		if (map[x][y] == -1) {
			break;
		}
		
		for (int i = 0; i < 4; i++) {
			int newX = curr.x + moveX[i];
			int newY = curr.y + moveY[i];
			int newTime = curr.time + 1;
			if (newX < 0 || newY < 0) {
				continue;
			}
			if (step[newX][newY] != -1 || (map[newX][newY] != -1 && map[newX][newY] <= newTime)) {
				continue;
			}
			State node;
			node.x = newX;
			node.y = newY;
			node.time = newTime;
			q.push(node);
			step[newX][newY] = step[x][y] + 1;
		}
	}
 	
	if (map[x][y] == -1) {
		printf("%d", step[x][y]);
	} else {
		printf("-1");
	}
	
	return 0;
}
