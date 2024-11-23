#include <bits/stdc++.h>
using namespace std;

int tree[10005] = {0};

int main() {
	int l, m, u, v;
	cin >> l >> m;
	
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		for (int j = u; j <= v; j++) {
			tree[j] = 1;
		}
	}
	
	int cnt = 0;
	for (int i = 0; i <= l; i++) {
		if (tree[i] == 0) {
			cnt++;
		}
	}
	cout << cnt;
	
	return 0;
}
