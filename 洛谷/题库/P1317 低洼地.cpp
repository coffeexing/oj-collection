#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt = 0, x, y;
    bool l = false, r = false;
    cin >> n;

    cin >> x;
    for (int i = 1; i < n; i++) {
        cin >> y;
        if (x > y) {
            l = true;
            r = false;
        } else if (x < y) {
            r = true;
        }
        if (l && r) {
            cnt++;
            l = false;
            r = false;
        }
        x = y;
    }

    cout << cnt << endl;

    return 0;
}