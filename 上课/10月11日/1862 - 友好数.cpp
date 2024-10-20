#include <bits/stdc++.h>
using namespace std;

bool friendNumber(int m, int n) {
    int sum = 0;
    for (int i = 1; i <= m / 2; i++) {
        if (m % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int m, n;
    cin >> m >> n;

    if (friendNumber(m, n) && friendNumber(n, m)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}