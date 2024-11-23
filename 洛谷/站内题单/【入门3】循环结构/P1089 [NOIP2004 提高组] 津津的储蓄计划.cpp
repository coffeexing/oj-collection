#include <bits/stdc++.h>
using namespace std;



int main() {
	int deposit = 0, cash = 0;
	int budget;
	
	for (int i = 1; i <= 12; i++) {
		cash += 300;
		cin >> budget;
		
		if ((cash -= budget) < 0) {
			cout << -i;
			return 0;
		}
		
		int saving = (cash / 100) * 100;
		cash -= saving;
		deposit += saving;
	}
	
	cout << cash + 1.2 * deposit;
	
	return 0;
}
