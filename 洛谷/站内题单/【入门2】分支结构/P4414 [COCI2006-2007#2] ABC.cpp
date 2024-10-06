#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[3];
	string str;
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr + 3);
	cin >> str;
	for (int i = 0 ; i < str.length(); i++) {
		cout << arr[str[i] - 'A'] << " ";
	}
	
	return 0;
}
