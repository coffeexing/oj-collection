#include <bits/stdc++.h>
using namespace std;

int main() {
    string w, s;
    cin >> s;
    int n = s.size();

    w = s;
    for (int i = 1; i < n; i++) {
        cin >> s;
        w += s;
    }
    w += " ";

    cout << n << " ";
    int j = 0;
    if (w[j] == '1') {
        cout << "0 ";
    }
    for (int i = 1; i < w.size(); i++) {
        if (w[j] != w[i]) {
            cout << i - j << " ";
            j = i;
        }
    }


    return 0;
}