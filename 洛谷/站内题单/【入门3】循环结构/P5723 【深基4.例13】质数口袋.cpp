#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int L, i = 2;
	int cnt = 0;
	scanf("%d", &L);
	
	while (L - i >= 0) {
		if (isPrime(i)) {
			printf("%d\n", i);
			cnt++;
			L -= i;
		}
		i++;
	}
	
	printf("%d", cnt);
	
	return 0;
}
