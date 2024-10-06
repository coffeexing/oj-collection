#include <bits/stdc++.h>
using namespace std;

int main() {
	int b1;
	scanf("%d", &b1);
	char s1[100];
	scanf("%s", s1);
	
	int n1 = 0, k;
	int l = strlen(s1);
	for (int i = l - 1; i >= 0; i--){
		if (isalpha(s1[i])) {
			k = s1[i] - 'A' + 10;
		} else {
			k = s1[i] - '0';
		}
		int q = pow(b1, l - i - 1);
		n1 += k * q;
	}
	
	int b2;
	scanf("%d", &b2);
	char s2[100];
	k = 0;
	
	while (n1) {
		int t = n1 % b2;
		if (t < 10) {
			s2[k++] = t + '0';
		} else {
			s2[k++] = t + 'A' - 10;
		}
		n1 /= b2;
	}
	
	for (int i = k - 1; i >= 0; i--){
		printf("%c", s2[i]);
	}
	
	return 0;
}
