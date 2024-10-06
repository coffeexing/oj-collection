#include <iostream>
using namespace std;

void swap(int arr[], int i, int j) {
	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j];
	arr[i] = arr[i] ^ arr[j];
}

int main() {
	int n, cnt = 0;
	int arr[n];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < n; i++) {
		for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--) {
			cnt++;
			swap(arr, j, j + 1);
		}
		
	}
	cout << cnt << endl; 
	
	return 0;
}
