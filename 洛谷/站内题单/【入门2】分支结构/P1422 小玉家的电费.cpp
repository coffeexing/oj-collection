#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	double res = n * 0.4463;
	if (n > 150) {
		res += (n - 150) * (0.4663 - 0.4463);
	}
	if (n > 400) {
		res += (n - 400) * (0.5663 - 0.4663);
	}
	cout << fixed << setprecision(1) <<res;
	
	return 0;
}
