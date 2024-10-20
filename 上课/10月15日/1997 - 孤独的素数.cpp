#include <bits/stdc++.h>
using namespace std;

int a[55][55];

bool isPrime(int x) {
    if (x < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool flag = true;
            if (isPrime(a[i][j])) {
                if (i - 1 >= 0 && isPrime(a[i - 1][j])) {
                    flag = false;
                }
                if (i + 1 < n && isPrime(a[i + 1][j])) {
                    flag = false;
                }
                if (j - 1 >= 0 && isPrime(a[i][j - 1])) {
                    flag = false;
                }
                if (j + 1 < m && isPrime(a[i][j + 1])) {
                    flag = false;
                }
                if (i - 1 >= 0 && j - 1 >= 0 && isPrime(a[i - 1][j - 1])) {
                    flag = false;
                }
                if (i + 1 < n && j - 1 >= 0 && isPrime(a[i + 1][j - 1])) {
                    flag = false;
                }
                if (i - 1 >= 0 && j + 1 < m && isPrime(a[i - 1][j + 1])) {
                    flag = false;
                }
                if (i + 1 < n && j + 1 < m && isPrime(a[i + 1][j + 1])) {
                    flag = false;
                }
                if (flag) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}