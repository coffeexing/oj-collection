#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned n;
	scanf("%u", &n);
	
	printf("%u", (n >> 16) + (n << 16));
}
