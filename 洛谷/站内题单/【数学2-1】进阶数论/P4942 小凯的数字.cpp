#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	scanf("%d", &k);
	
	for (int i = 0; i < k; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		int r = b % 10 % 9;
		printf("%d\n", r);
	}
	
	return 0;
}

