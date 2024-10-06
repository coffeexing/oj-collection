#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = n * 5;
	int b = 11 + n * 3;
	cout << (a < b ? "Local" : "Luogu");
	return 0;
}
