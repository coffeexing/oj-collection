#include <iostream>
using namespace std;

int main() {
	int n, m;
	long long int cz = 0, cc = 0; 
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int cx = n - i + 1;
			int cy = m - j + 1;
			if (i == j) {
				cz += cx * cy;
			} else {
				cc += cx * cy;
			}
		}
	}
	printf("%lld %lld", cz, cc);
	return 0;
} 
