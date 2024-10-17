#include <bits/stdc++.h>
using namespace std;

long long n, a[1000005], f[1000005], ans = -1e10;

int main() {
    cin >> n;
    f[0] = 1e9;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = min(f[i - 1], a[i]);
    }

    for (int i = 1; i <= n; i++) {
        f[i] = a[i] - f[i];
        ans = max(f[i], ans);
    }

    cout << ans <<endl;

    return 0;
}