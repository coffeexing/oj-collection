#include <iostream>
#include <cmath>
using namespace std;

int f(int x) {
	return x % 2 == 0;
}

int g(int x) {
	return (x > 4 && x <= 12);
}

int main() {
	int n;
	cin >> n;
	int a = f(n) & g(n);
	int b = f(n) | g(n);
	int c = f(n) ^ g(n);
	int d = (!f(n) & !g(n));
	printf("%d %d %d %d", a, b, c, d);
	
	return 0;
}
