#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b, r;
    int a1, a2, b1, b2;
    scanf("%d/%d", &a1, &b1);
    scanf("%d/%d", &a2, &b2);
    a = a1 * a2;
    b = b1 * b2;
    r = gcd(a, b);
    cout << b / r << " " << a / r;

    return 0;
}


