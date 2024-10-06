#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	cout << "Today, I ate " << a <<" apple";
	switch (a) {
		case 0: ;
		case 1: 
			cout<< ".";
			break;
		default: 
			cout << "s.";
			break;
	}
	return 0;
}
