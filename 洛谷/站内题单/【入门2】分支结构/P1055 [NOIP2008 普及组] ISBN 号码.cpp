#include <bits/stdc++.h>
using namespace std;

int main() {
	int code = 0, n = 0;
	char str[15];
	cin >> str;
	for (int i = 0; i < 12; i++) {
		if (isdigit(str[i])) {
			code += (str[i] - '0') * (++n);
		}
	}
	if (str[12] - '0' == code % 11 || code % 11 == 10 && str[12] == 'X') {
		cout << "Right";
	} else {
		str[12] = code % 11 == 10 ? 'X' : code % 11 + '0';
		cout << str;
	}
	
	return 0;
}
