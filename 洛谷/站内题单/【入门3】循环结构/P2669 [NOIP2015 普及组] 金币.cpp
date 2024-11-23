#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	scanf("%d", &k);
	
	long long int coin = 0;
	int i = 0, n = 1;
	while (k > 0) {
		i = 0;
		while (i < n && k > 0) {
			k--;
			i++;
			coin += n;
		}
		n++;
	}
	printf("%lld", coin);
	
	return 0;
} 
