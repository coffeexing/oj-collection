#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int t, min_t, max_t;
	cin >> n;
	
	cin >> t;
	min_t = max_t = t;
	for (int i = 1; i < n; i++) {
		cin >> t;
		min_t = min(min_t, t);
		max_t = max(max_t, t);
	}
	
	cout << max_t - min_t;
	
	return 0;
}
