#include<bits/stdc++.h>

using namespace std;

int pd(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int g, s, b;
    for (int i = 400; i <= 999; i++) {
        b = i / 100;
        s = i / 10;
        if (!(pd(i) || pd(b) || pd(s))) {
            cout << i << endl;
        }
    }
    return 0;
}