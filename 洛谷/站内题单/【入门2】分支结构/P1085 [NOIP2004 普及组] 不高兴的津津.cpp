#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, index = 0;
	int arr[8] = {0};
	for (int i = 1; i < 8; i++) {
		cin >> a >> b;
		arr[i] = a + b;
	} 
	for (int i = 1; i < 8; i++) {
		if (arr[i] > 8 && arr[i] > arr[index]) {
			index = i;
		}
	}
	cout << index;
	
	return 0;
}
