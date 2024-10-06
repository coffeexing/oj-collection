#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	int N, A, B;
	scanf("%d%d%d", &N, &A, &B);
	int move[N + 1];
	for (int i = 1 ;i <= N; i++) {
		scanf("%d", &move[i]);
	}
	vector<int> building(N + 1, -1);
	queue<int> q;
	q.push(A);
	building[A] = 0;
	
	while (!q.empty()) {
		int current = q.front();
		q.pop();
		
		if (current == B) {
			break;
		}
		
		for (int i = 0; i < 2; i++) {
			int pos = current + (i == 0 ? 1 : -1) * move[current];
			if (pos <= 0 || pos > N) {
				continue;
			}
			if (building[pos] != -1) {
 				continue;
			}
			q.push(pos);
			building[pos] = building[current] + 1;
		}		
	}
	
	printf("%d", building[B]);
	
	return 0;
} 
