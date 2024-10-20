#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    int ans = 0;
    for (int i = l; i <= r; i++) {
        string s = to_string(i);
        for (char c : s) {
            if (c == '2') {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}