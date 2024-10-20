#include <bits/stdc++.h>
using namespace std;

bool ignoreCase(string s1, string s2) {
    for (int i = 0; i < s1.size(); i++) {
        if (tolower(s1[i]) != tolower(s2[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size()) {
        cout << 1 << endl;
    } else if (s1 == s2) {
        cout << 2 << endl;
    } else if (ignoreCase(s1, s2)) {
        cout << 3 << endl;
    } else {
        cout << 4 << endl;
    }

    return 0;
}