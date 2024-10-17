#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v(a + b + c + 1, 0);

    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                ++v[i + j + k];
            }
        }
    }

    cout << max_element(v.begin(), v.end()) - v.begin() << endl;

    return 0;
}