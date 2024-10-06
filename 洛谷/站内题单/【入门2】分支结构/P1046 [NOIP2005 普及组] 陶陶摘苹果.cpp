#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[10], h, n = 0;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cin >> h;
	for (int i = 0; i < 10; i++) {
		if (arr[i] <= h + 30) {
			n++;
		}
	}
	cout << n;
	
	return 0;
}
