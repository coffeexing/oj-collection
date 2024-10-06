#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct Person {
	int id, score;
};

bool cmp(Person p1, Person p2) {
	if (p1.score == p2.score) {
		return p1.id < p2.id;
	}
	return p1.score > p2.score;
}

int main() {
	int n, m, k, s = 0;
	cin >> n >> m;
	Person p[n];
	m = (int) floor(m * 1.5);
	m = (m <= n ? m : n) - 1;
	for (int i = 0; i < n; i++) {
		cin >> p[i].id >> p[i].score;
	}
	sort(p, p + n, cmp);
	k = p[m].score;
	while (p[s++].score >= k) {
		
	}
	cout << k << " " << s - 1 << endl;
	for (int i = 0; i < s - 1; i++) {
		cout << p[i].id << " " << p[i].score << endl;
	}
	return 0;
}
