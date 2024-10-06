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

int numberLength(int x) {
	int n = 0;
	while(x) {
		x /= 10;
		n++;
	}
	return n;
} 

int main() {
	int a, b;
	cin >> a >> b;
	if (a % 2 == 0) {
		a++;
	}
	while (a <= b) {
		int n = numberLength(a);
		if (n % 2 == 0 && a != 11) {
			a = (int)pow(10, n) + 1; 
		}
		if (isPalindrome(a) && isPrime(a)) {
			cout << a << endl;
		}
		a += 2;
	}
	return 0;
}
