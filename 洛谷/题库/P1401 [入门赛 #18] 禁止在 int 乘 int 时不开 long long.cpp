#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x1, x2, y1, y2, a1, a2;
    cin >> x1 >> x2 >> y1 >> y2;
    a1 = min(x1 * y2, x2 * y1);
    a2 = x2 * y2;
    if (a1 < INT_MIN || a2 > INT_MAX) {
        cout << "long long int";
    } else {
        cout << "int";
    }

    return 0;
}