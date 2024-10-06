#include <iostream>
#include <vector>
using namespace std;

int t, m;
vector<int> weight(1);
vector<int> value(1);
vector<vector<int>> package(105, vector<int>(1005));

int solve() {
	for (int i = 1; i <= m; i++) {
		for (int j = 0; j <= t; j++) {
			if (weight[i] > j) {
				package[i][j] = package[i - 1][j];
			} else {
				package[i][j] = max(package[i - 1][j], package[i - 1][j - weight[i]] + value[i]);
			}
		}
	}
	return package[m][t];
}

int main() {
	scanf("%d%d",&t, &m);
	for (int i = 0; i < m; i++) {
		int x, y;
		scanf("%d%d", &x, &y);
		weight.push_back(x);
		value.push_back(y);
	}
	cout << solve();
	
	return 0;
}
