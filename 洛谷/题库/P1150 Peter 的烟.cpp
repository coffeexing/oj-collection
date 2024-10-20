#include <bits/stdc++.h>
using namespace std;

int calc(int n, int m, int k) {
    if (n + m < k) {
        return n;
    }
    return n + calc((n + m) / k, (n + m) % k, k);
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << calc(n, 0, k);

    return 0;
}