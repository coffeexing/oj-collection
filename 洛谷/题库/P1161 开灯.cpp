#include <bits/stdc++.h>
using namespace std;

int light[3000005];

int main() {
    int n, t;
    double a;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> t;
        for (int j = 1; j <= t; j++) {
            light[(int)(a * j)] ^= 1;
        }
    }

    for (int i = 1; i <= 3000000; i++) {
        if (light[i] == 1) {
            cout << i;
            return 0;
        }
    }

    return 0;
}
