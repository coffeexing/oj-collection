#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, uh = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        uh = uh + a + b - 8;
        sum += uh;
    }
    cout << sum << endl;

    return 0;
}