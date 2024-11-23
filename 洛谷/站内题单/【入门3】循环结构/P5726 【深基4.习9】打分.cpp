#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int s, min_s, max_s;
	double score;
	cin >> n;
	
	cin >> s;
	score = min_s = max_s = s;
	for (int i = 1; i < n; i++) {
		cin >> s;
		min_s = min(min_s, s);
		max_s = max(max_s, s);
		score += s;
	}
	
	double avg = (score - max_s - min_s) / (n - 2);
	printf("%.2f", avg);
	
	return 0;
}
