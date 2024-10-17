#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = i + 1;
        }

        int p = -1, cnt = 0;
        while (v.size() > 3) {
            while (p < v.size() || p == -1) {
                p += (2 + cnt % 2);
                if (p < v.size()) {
                    v.erase(v.begin() + p);
                    p--;
                }
            }
            p = -1;
            cnt++;
        }

        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " \n"[i == v.size() - 1];
        }
    }
    return 0;
}
