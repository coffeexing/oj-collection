#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	if (arr[0] + arr[1] > arr[2] && arr[2] - arr[1] < arr[0]) {
		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
			cout << "Right triangle" << endl;
		}
		if (arr[0] * arr[0] + arr[1] * arr[1] > arr[2] * arr[2]) {
			cout << "Acute triangle" << endl;
		}
		if (arr[0] * arr[0] + arr[1] * arr[1] < arr[2] * arr[2]) {
			cout << "Obtuse triangle" << endl;
		}
		if (arr[0] == arr[1] || arr[1] == arr[2]) {
			cout << "Isosceles triangle" << endl;
			
		}
		if (arr[0] == arr[1] && arr[1] == arr[2]) {
			cout << "Equilateral triangle" << endl;
		}
	} else {
		cout << "Not triangle" << endl;
	}
	
	return 0;
}
