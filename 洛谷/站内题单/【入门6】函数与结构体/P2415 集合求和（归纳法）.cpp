#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int arr[30], n = 0;
	long long int res = 0;
	while(cin >> arr[n]) {
		res += arr[n++]; 
	}
	res = res * (int) pow(2, n - 1);
	cout << res;
	
	return 0; 
} 
