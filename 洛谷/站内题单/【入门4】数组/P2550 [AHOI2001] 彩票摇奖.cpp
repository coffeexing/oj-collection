#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> win;
    for (int i = 0; i < 7; ++i) {
        int x;
        cin >> x;
        win.push_back(x);
    }

    while (n--) {
        int cnt = 0;
        for (int i = 0; i < 7; ++i) {
            int x;
            cin >> x;
            for (int j = 0; j < 7; ++j) {
                if () {
                    cnt++;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}