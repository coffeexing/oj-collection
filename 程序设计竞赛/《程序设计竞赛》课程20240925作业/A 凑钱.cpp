#include <iostream>
using namespace std;

int dp[1000005] = {0};
int coin[3] = {1, 5, 11};

int min_coin(int n) {
	if (dp[n] != 0) {
		return dp[n];
	}
	int min = 1000000;
	for (int i = 0; i < 3; i++) {
		int c = coin[i];
		if (n - c <= 0) {
			continue;
		}
		int res = min_coin(c) + min_coin(n - c);
		if (res < min) {
			min = res;
		}
	}
	return dp[n] = min;
}


int main() {
	int n;
	scanf("%d", &n);
	
	dp[1] = dp[5] = dp[11] = 1;
	
	printf("%d", min_coin(n));
	
	return 0;
} 
