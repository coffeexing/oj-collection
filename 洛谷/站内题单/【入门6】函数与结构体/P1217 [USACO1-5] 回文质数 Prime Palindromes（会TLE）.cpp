#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

bool isPrime(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

bool isPalindrome(int x) {
	char str[15];
	sprintf(str, "%d", x);
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) {
			return false;
		}
	}
	return true;
}

int main() {
	int a, b;
	cin >> a >> b;
	if (a % 2 == 0) {
		a++;
	}
	for (int i = a; i <= b; i += 2) {
		if (isPalindrome(i) && isPrime(i)) {
			cout << i << endl;
		}
	}
	return 0;
}
