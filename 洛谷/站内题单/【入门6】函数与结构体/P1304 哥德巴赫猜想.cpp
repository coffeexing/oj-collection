#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

bool isPrime(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	for (int i = 4; i <= n; i += 2) {
		for (int j = 2; j < i; j++) {
			if (isPrime(j) && isPrime(i - j)) {
				printf("%d=%d+%d\n", i, j, i - j);
				break;
			}
		}
	}
	
	return 0;
}
