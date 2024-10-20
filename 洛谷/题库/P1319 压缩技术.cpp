#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, x, cnt = 0, op = 0;
    cin >> N;

    while (cin >> x) {
        for (int j = 0; j < x; j++) {
            cout << op % 2;
            if (cnt % N == N - 1) {
                cout << endl;
            }
            cnt++;
        }
        op++;
    }

    return 0;
}
