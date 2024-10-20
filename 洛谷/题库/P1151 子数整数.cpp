#include <bits/stdc++.h>
using namespace std;

int div_k[1000];

int main() {
    int k;
    cin >> k;

    for (int i = 0; i < 1000; i++) {
        div_k[i] = i % k == 0 ? 1 : 0;
    }

    bool flag = true;
    for (int i = 10000; i <= 30000; i++) {
        int a = i / 100;
        int b = i / 10 % 1000;
        int c = i % 1000;
        if (div_k[a] && div_k[b] && div_k[c]) {
            cout << i << endl;
            flag = false;
        }
    }
    if (flag) {
        cout << "No";
    }
    return 0;
}