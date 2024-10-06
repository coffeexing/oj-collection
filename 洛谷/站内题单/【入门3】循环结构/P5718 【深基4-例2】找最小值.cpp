#include <bits/stdc++.h>
using namespace std;

int main() {
	int min, n, num;
	cin >> n;
	cin >> min;
	for (int i = 0; i < n - 1; i++) {
		cin >> num;
		min = num < min ? num : min;
	}
	cout << min;
	
	return 0;
}
