#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < i; j++) {
            if (v[j] < v[i]) {
                cnt++;
            }
        }
        cout << cnt << " ";
    }

    return 0;
}
