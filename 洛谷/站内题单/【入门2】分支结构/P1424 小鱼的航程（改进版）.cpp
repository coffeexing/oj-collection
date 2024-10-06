#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, n, s = 0;
	cin >> x >> n;
	while (n--) {
		if (x % 7 != 0 && x % 7 != 6) {
			s += 250;
		}
		x++;
	}
	cout << s;
	
	return 0;
}
