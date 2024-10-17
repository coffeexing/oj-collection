#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> f(20000, 0);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (v[i] + v[j] == v[k] && f[v[k]] == 0 && i != k && j != k) {
                    ++cnt;
                    ++f[v[k]];
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
