#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int t[130] = {0};

    for (int i = 0; i < s.size(); i++) {
        t[s[i]]++;
    }

    int maxx = -1, index = -1;
    for (int i = 'a'; i <= 'z'; i++) {
        if (maxx <= t[i]) {
            maxx = t[i];
            index = i;
        }
    }

    cout << (char) index;

    return 0;
}
