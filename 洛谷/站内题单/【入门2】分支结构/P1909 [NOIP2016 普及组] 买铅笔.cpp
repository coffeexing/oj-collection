#include <bits/stdc++.h>
using namespace std;

struct Pencil {
	int n, m;
	int total;
};

bool cmp(Pencil p1, Pencil p2) {
	return p1.total < p2.total;
}

int main() {
	int n;
	Pencil p[3];
	cin >> n;
	for (int i = 0; i < 3; i++) {
		cin >> p[i].n >> p[i].m;
		p[i].total = p[i].m * (int) ceil((double) n / p[i].n);
	}
	sort(p, p + 3, cmp);
	cout << p[0].total;
	
	return 0;
}
