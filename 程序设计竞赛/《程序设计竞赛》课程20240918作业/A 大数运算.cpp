#include <bits/stdc++.h>
using namespace std;

int main() {
	string strA;
	string strB;
	char op;
	cin >> strA >> op >> strB;
	
	int lenA = strA.size() - 1;
	int lenB = strB.size() - 1;
	
	if (lenA < lenB) {
		int t = lenA;
		lenA = lenB;
		lenB = t;
		
		string s = strA;
		strA = strB;
		strB = s;
	}
	
	if (op == '+') {
		if (lenA == 0 && lenB == 0) {
			if (strA == "1" && strB == "1") {
				cout << 2;
			} else {
				cout << strA;
			}
		} else if (lenA == lenB) {
			cout << 2;
			for (int i = 0; i < lenA; i++) {
				cout << 0;
			}
		} else {
			cout << 1;
			for (int i = 0; i < lenA - lenB - 1; i++) {
				cout << 0;
			}
			cout << 1;
			for (int i = 0; i < lenB; i++) {
				cout << 0;
			}
		}
	} else if (op == '*') {
		if (strA == "1" || strB == "1") {
			cout << strA;
		} else if (lenA == 0 || lenB == 0) {	
			cout << 0;
		} else {
			cout << 1;
			for (int i = 0; i < lenA + lenB; i++) {
				cout << 0;
			}
		}
	}
	
	return 0;
} 
