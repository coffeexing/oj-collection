#include <iostream>
using namespace std;

int process(int res, int d) {
	if (d == 1) {
		return res;
	}
	res = (res + 1) * 2;
	return process(res, d - 1);
}

int main() {
	int n;
	cin >> n;
	cout << process(1, n);
	
	return 0;
} 
