#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    while (cin >> t && t) {
        string s1, s2;
        set<string> st1, st2;

        for (int i = 0; i < t; i++) {
            cin >> s1 >> s2;
            st1.insert(s1);
            st1.insert(s2);
            st2.insert(s2);
        }

        if (st1.size() == st2.size() + 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

    }


}