#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct Person {
	int id, len;
	string num;
};

bool cmp(Person p1, Person p2) {
	if (p1.len == p2.len) {
		return p1.num > p2.num;
	}
	return p1.len > p2.len;
}

int main() {
	int n;
	cin >> n;
	Person p[n];
	for (int i = 0; i < n; i++) {
		p[i].id = i + 1;
		cin >> p[i].num;
		p[i].len = p[i].num.length();
	}
	sort(p, p + n, cmp);
	cout << p[0].id << endl << p[0].num;
	
	return 0;
} 
