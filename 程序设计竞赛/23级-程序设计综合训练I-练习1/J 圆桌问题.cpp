#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m) {
        vector<int> v(n * 2);
        vector<int> res(n * 2);
        for (int i = 0; i < n * 2; i++) {
            v[i] = i;
        }

        int p = 0;
        for (int i = 0; i < n; i++) {
            p = (p + m - 1) % v.size();
            v.erase(v.begin() + p);
        }

        for (int i = 0; i < n; i++) {
            res[v[i]] = 1;
        }

        for (int i = 0; i < 2 * n; i++) {
            if (res[i] == 1) {
                cout << "G";
            } else {
                cout << "B";
            }
            if (i % 50 == 49 && i != 2 * n - 1) {
                cout << endl;
            }
        }
        cout << endl << endl;
    }




    return 0;
}