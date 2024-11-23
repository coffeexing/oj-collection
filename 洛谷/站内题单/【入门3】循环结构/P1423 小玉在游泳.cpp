#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 0;
	double s, p = 2.0;
	cin >> s;
	
	while (p < s) {
		s -= p;
		p *= 0.98;
		t++;
	}
	
	cout << t + 1;
	
	return 0;
}
