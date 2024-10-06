#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Seasoning {
	int s, b;
};

struct Flavor {
	vector<Seasoning> list;
	int total_s;
	int total_b;
};

int n;
vector<Seasoning> seas;

int dfs(Flavor f, int last) {
	if (last == n) {
		if (f.list.empty()) {
			return 0x7fffffff;
		}
		return abs(f.total_b - f.total_s);
	}
	
	
	Flavor nf = f;
	nf.list.push_back(seas[last]);
	nf.total_s *= seas[last].s;
	nf.total_b += seas[last].b;
	int r1 = dfs(nf, last + 1);
	int r2 = dfs(f, last + 1);
	return min(r1, r2);
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int s, b;
		scanf("%d%d", &s, &b);
		Seasoning newS;
		newS.s = s;
		newS.b = b;
		seas.push_back(newS);
	}
	Flavor f;
	f.total_s = 1;
	f.total_b = 0;
	
	int res = dfs(f, 0);
	printf("%d", res);
	
	return 0;
}
