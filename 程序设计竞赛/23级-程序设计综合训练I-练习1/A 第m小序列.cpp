#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
        }
        do {
            m--;
        } while (m && next_permutation(a.begin(), a.end()));

        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
    }

    return 0;
}