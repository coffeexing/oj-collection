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
	for (int i = 2; i < n; i++) {
		if (n % i == 0 && isPrime(i)) {
			cout << n / i;
			break;
		}
	}
	
	return 0;
}
