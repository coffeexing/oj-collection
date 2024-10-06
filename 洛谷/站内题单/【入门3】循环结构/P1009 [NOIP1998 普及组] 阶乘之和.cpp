#include <bits/stdc++.h>
#define bit 1000000000
using namespace std;

void add(int num[], int added[]) {
	int help, carry = 0;
	for(int i = 7; i >= 0; i--) {
		help = num[i] + added[i] + carry;
		num[i] = help % bit;
		carry = help / bit;
	}
}

void muti(int num[], int k) {
	int help, carry = 0;
	for(int i = 7; i >= 0; i--) {
		help = num[i] * k + carry;
		num[i] = help % bit;
		carry = help / bit;
	}
}

int main() {
	int n, num[8] = {0}, help[8] = {0};
	cin >> n;
	help[7] = num[7] = 1;
	for (int i = 2; i <= n; i++) {
		muti(help, i % 0);
		add(num, help);
	}
	for (int i = 0; i < 8; i++) {
		printf("%09d", num[i]);
	}
	
	return 0;
}
