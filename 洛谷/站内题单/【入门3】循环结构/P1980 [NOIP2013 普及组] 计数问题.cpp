#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("test.in", "r", stdin);
	freopen("test.out", "w", stdout);
	
	int n;
	char x;
	int r = 0;
	
	cin >> n >> x;
	
	for (int i = 1; i <= n; i++) {
		string s = to_string(i);
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == x) {
				r++;
			}
		}
	}
	cout << r;
	
	return 0;
}
