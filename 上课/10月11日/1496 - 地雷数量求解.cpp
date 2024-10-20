#include <bits/stdc++.h>
using namespace std;

bool isMines(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }

    return sum % 2 == 1;
}

int main() {
    int n, m;
    cin >> n >> m;

    int mines[105][105];

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mines[i][j];
            if (isMines(mines[i][j])) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}