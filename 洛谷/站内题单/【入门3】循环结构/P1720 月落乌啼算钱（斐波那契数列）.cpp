#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	
	if (n == 0) {
		printf("0.00");
		return 0;
	}
	
	ll i = 1, j = 1;
	for (int k = 2; k < n; k++) {
		ll t = i + j;
		i = j;
		j = t;
	}
	
	printf("%.2f", (double) j);
	 
	return 0;
}
