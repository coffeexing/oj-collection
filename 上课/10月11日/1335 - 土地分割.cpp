#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll m, n;
    cin >> m >> n;

    while (n != 0) {
        ll r = n;
        n = m % n;
        m = r;
    }

    cout << m << endl;
    return 0;
}