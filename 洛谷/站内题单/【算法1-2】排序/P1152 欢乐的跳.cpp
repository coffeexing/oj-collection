#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a, b, ans = 1;
	cin >> n;
	int arr[n] = {0};
	cin >> a;
	for (int i = 0; i < n - 1; i++) {
		cin >> b;
		if (abs(b - a) < n) {
			arr[abs(b - a)] = 1;
		} else {
			cout << "Not jolly";
			return 0;
		}
		a = b;
	}
	for (int i = 1; i < n; i++) {
		ans = ans & arr[i];
	}
	if (ans) {
		cout << "Jolly";
	} else {
		cout << "Not jolly";
	}
	return 0;
} 
