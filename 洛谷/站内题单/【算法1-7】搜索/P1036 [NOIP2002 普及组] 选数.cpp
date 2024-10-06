#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int n, k;

struct State {
	vector<int> list;
	int sum;
	int number; 
	
};

bool isPrime(int x) {
	if (x < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int dfs(State node, vector<int> nums, int last) {
	if (node.number == k) {
		if (isPrime(node.sum)) {
			return 1;
		} else {
			return 0;
		}
	}
	
	int cnt = 0;
	for (int i = last; i < n; i++) {
		State newnode = node;
		newnode.list.push_back(nums[i]);
		newnode.number++;
		newnode.sum += nums[i];
		cnt += dfs(newnode, nums, i + 1);
	}
	return cnt;
}

int main() {
	scanf("%d%d", &n, &k);
	int t;
	vector<int> nums;
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		nums.push_back(t);
	}
	sort(nums.begin(), nums.end());
	
	State node;
	vector<int> temp;
	node.list = temp;
	node.number = 0;
	node.sum = 0;
	int res = dfs(node, nums, 0);
	
	printf("%d", res);
}
