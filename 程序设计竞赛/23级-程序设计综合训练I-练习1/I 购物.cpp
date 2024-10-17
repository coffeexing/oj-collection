#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp[s] = 0;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            string s;
            cin >> x >> s;
            mp[s] += x;
        }
        vector<pair<string, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
            return a.second > b.second || (a.second == b.second && a.first == "memory");
        });

        int j = 0;
        for (; j < n; ++j) {
            if (v[j].first == "memory") {
                break;
            }
        }
        cout << j + 1 << endl;
    }

    return 0;
}