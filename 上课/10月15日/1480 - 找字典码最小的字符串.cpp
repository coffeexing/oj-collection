#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s, s + n);

    cout << s[0] << endl;
}
