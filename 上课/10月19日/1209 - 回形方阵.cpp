#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[25][25] = {0};
    int x = n, y = n;
    for (int r = 0; r <= n; r++) {
        for (int i = -r; i <= r; i++) {
            a[x + i][y + r] = r;
            a[x + r][y + i] = r;
            a[x - i][y - r] = r;
            a[x - r][y - i] = r;
        }
    }

    for (int i = 0; i < n * 2 + 1; i++) {
        for (int j = 0; j < n * 2 + 1; j++) {
            cout << setw(2) << a[i][j];
        }
        cout << endl;
    }

    return 0;
}