#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int max_cnt = 1;
	int cnt = 0;
	int p, q;
	
	cin >> p;
	for (int i = 1; i < n; i++) {
		cin >> q;
		if (p - q == -1) {
			p = q;
			cnt++;
		} else {
			max_cnt = max(max_cnt, cnt);
			cnt = 1;
			p = q;
		}
	}
	
	cout << max(max_cnt, cnt);
	
	return 0;
} 
