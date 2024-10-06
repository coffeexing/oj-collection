#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	unsigned int n;
	scanf("%u", &n);
	
	int num1[32] = {0};
	
	
	int k = 32;
	while (n) {
		num1[--k] = n % 2;
		n >>= 1;
	}
	
	int num2[32] = {0};
	
	for (int i = 0; i < 16;i++){
		num2[i] = num1[16 + i];
	}
	
	for (int i = 16; i < 32;i++){
		num2[i] = num1[i - 16];
	}
	
	
	unsigned int r = 0;
	
	for (int i = 0; i < 32;i++){
		r += num2[31 - i] * pow(2, i);
	}
	
	printf("%u", r);
	
	return 0;
}
