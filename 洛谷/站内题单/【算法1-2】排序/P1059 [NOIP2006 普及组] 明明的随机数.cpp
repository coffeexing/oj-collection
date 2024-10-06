#include <iostream>
using namespace std;

int main() {
	int a, m, n = 0;
	int arr[1001] = {0};
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a;
		if (!arr[a]) {
			n++;
		}
		arr[a]++;
	}
	cout << n << endl;
	for (int i = 0; i < 1000; i++) {
		if (arr[i]) {
			cout << i << " ";
		}
	}
	
	return 0;
} 
