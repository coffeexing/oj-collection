#include <bits/stdc++.h>
using namespace std;

int main() {
	bool f = false;
	int k = 0;
	string str;
	cin >> str;
	reverse(str.begin(), str.end());
	
	if (str == "0") {
		cout << str;
		return 0;
	}
	
	if (str[str.size() - 1] == '-') {
		cout << '-';
		k++;
	}
	
	for (int i = 0; i < str.size() - k; i++) {
		
		if (!f && str[i] != '0') {
			f = true;
		}
		
		if (f || str[i] != '0') {
			cout << str[i];
		}
		
	}
		
	return 0;
}
