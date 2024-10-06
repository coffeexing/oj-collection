#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	int g = __gcd(arr[0], arr[2]);
	cout << arr[0] / g << "/" << arr[2] / g;
	
	return 0;
}
