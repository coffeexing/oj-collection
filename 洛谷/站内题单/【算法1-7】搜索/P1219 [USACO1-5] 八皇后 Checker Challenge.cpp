#include <iostream>
#include <cmath>
using namespace std;

int cnt = 0;

// curr == num || i + curr == add || abs(i - curr) == minus
bool check(int list[], int height, int num) {
	int add = height + num;
	int minus = abs(height - num);
	for (int i = 0; i < height; i++) {
		int curr = list[i];
		if (curr == num || abs(curr - num) == abs(i - height)) {
			return false;
		}
	}
	return true;
}

void dfs(int list[], int height, int n) {
	if (height == n) {
		cnt++;
		if (cnt > 3) {
			return;
		}
		for (int i = 0; i < n; i++) {
			printf("%d ", list[i] + 1);
		}
		printf("\n");
		return;
	}
	for (int i = 0; i < n; i++) {
		if (check(list, height, i)) {
			list[height] = i;
			dfs(list, height + 1, n);
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int list[13] = {0};
	dfs(list, 0, n);
	printf("%d", cnt);
	return 0;
}
