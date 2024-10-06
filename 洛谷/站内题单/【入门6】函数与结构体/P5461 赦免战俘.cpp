#include <iostream>
#include <cmath>
using namespace std;

void process(int arr[][1024], int x, int y, int k) {
	if (k == 0) {
		return;
	}
	for (int i = x; i < x + k; i++) {
		for (int j = y; j < y + k; j++) {
			arr[i][j] = 1;
		}
	}
	process(arr, x + k, y, k / 2);
	process(arr, x, y + k, k / 2);
	process(arr, x + k, y + k, k / 2);
}

int main() {
	int n;
	cin >> n;
	n = (int) pow(2, n);
	int arr[n][1024] = {0};
	process(arr, 0, 0, n / 2);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << !arr[i][j] << " ";
		}
		cout << endl;
	}
}


