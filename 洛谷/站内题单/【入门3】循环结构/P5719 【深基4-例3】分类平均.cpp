#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int s1 = 0, n1 = 0;
	int s2 = 0, n2 = 0;
	for (int i = 1; i <= n; i++) {
		if (i % k == 0) {
			s1 += i;
			n1++;
		} else {
			s2 += i;
			n2++;
		}
	}
	printf("%.1f %.1f", (double) s1 / n1, (double) s2 / n2);
	
	return 0;
}
