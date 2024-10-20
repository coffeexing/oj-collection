#include<bits/stdc++.h>

using namespace std;

int a[55][55];

int sz(int n, int m) {
    int t;
    bool flag;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            t = a[i][j];
            if (t < 2)
                flag = 1;
            else {
                flag = 0;
                for (int k = 2; k <= sqrt(t); k++) {
                    if (t % k == 0) {
                        flag = 1;
                        break;
                    }
                }
            }

            if (flag)
                a[i][j] = 0;
            else
                a[i][j] = 1;
        }
    }
    return true;
}

int main() {
    int n, m, ans = 0;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    sz(n, m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 1) {
                bool flag = true;
                if (i - 1 > 0 && a[i - 1][j] == 1) {
                    flag = false;
                }
                if (i + 1 <= n && a[i + 1][j] == 1) {
                    flag = false;
                }
                if (j - 1 > 0 && a[i][j - 1] == 1) {
                    flag = false;
                }
                if (j + 1 <= m && a[i][j + 1] == 1) {
                    flag = false;
                }
                if (i - 1 > 0 && j - 1 > 0 && a[i - 1][j - 1] == 1) {
                    flag = false;
                }
                if (i + 1 <= n && j - 1 > 0 && a[i + 1][j - 1] == 1) {
                    flag = false;
                }
                if (i - 1 > 0 && j + 1 <= m && a[i - 1][j + 1] == 1) {
                    flag = false;
                }
                if (i + 1 <= n && j + 1 <= m && a[i + 1][j + 1] == 1) {
                    flag = false;
                }
                if (flag) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
