#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();

    while (t--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> s) {
            reverse(s.begin(), s.end());
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}
