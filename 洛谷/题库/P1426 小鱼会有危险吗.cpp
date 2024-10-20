#include <bits/stdc++.h>
using namespace std;

int main() {
    double s, x, d = 7, l = 0;
    cin >> s >> x;

    while (l < s - x) {
        l += d;
        d *= 0.98;
    }
    if (d * 0.98 <= s + x - l) {
        cout << "y" << endl;
    } else {
        cout << "n" << endl;
    }

    return 0;
}