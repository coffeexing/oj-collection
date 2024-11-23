#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x_3k;
	cin >> n;
	x_3k = n / 52 / 7;
	
	for (int k = 1; k <= n; k++) {
		int x = x_3k - 3 * k;
		if (x <= 100) {
			cout << x << endl << k;
			return 0;
		}
	}
	
	return 0;
} 
