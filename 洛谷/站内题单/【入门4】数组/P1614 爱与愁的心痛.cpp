#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int minv = 0x7fffffff;
    for (int i = 0; i <= n - m; ++i) {
        int va = 0;
        for (int j = 0; j < m; ++j) {
            va += v[i + j];
        }
        minv = min(minv, va);
    }

    cout << minv << endl;

    return 0;
}