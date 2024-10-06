#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double getV(int r) {
	const double PI = 3.141593;
	return PI * ( 4.0 / 3 ) * r * r * r;
}

int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
    	cout << 3 << endl << 12 << endl << 2; 
    } else if (T == 4) {
        cout << setprecision(6) << 500.0 / 3; 
    } else if (T == 5) {
        cout << ( 260 + 220) / ( 12 + 20 );
    } else if (T == 6) {
        cout << sqrt( 6 * 6 + 9 * 9 );
    } else if (T == 7) {
        cout << 110 << endl;
        cout << 90 << endl;
        cout << 0;
    } else if (T == 8) {
    	const double PI = 3.141593;
        cout << 2 * PI * 5 << endl;
        cout << PI * 5 * 5 << endl; 
        cout << PI * ( 4.0 / 3 ) * 5 * 5 * 5; 
    } else if (T == 9) {
        cout << 22;
    } else if (T == 10) {
        cout << 9;
    } else if (T == 11) {
        cout << 100 / 3.0;
    } else if (T == 12) {
        cout << 'M' - 'A' + 1 << endl;
        cout <<	(char) ('A' + 18 - 1);
    } else if (T == 13) {
        double V = getV(4) + getV(10);
        cout << (int) cbrt(V);
    } else if (T == 14) {
        cout << 50;
    }
    return 0;
}
 
