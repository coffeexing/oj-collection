#include <bits/stdc++.h>
using namespace std;

struct Node {
    int x, y, z;
};


int main() {
    int w, x, h;
    cin >> w >> x >> h;
    vector<vector<vector<bool>>> cube(w + 1, vector<vector<bool>>(x + 1, vector<bool>(h + 1, true)));

    int q;
    cin >> q;

    while (q--) {
        Node n1, n2;
        cin >> n1.x >> n1.y >> n1.z >> n2.x >> n2.y >> n2.z;

        for (int i = n1.x; i <= n2.x; ++i) {
            for (int j = n1.y; j <= n2.y; ++j) {
                for (int k = n1.z; k <= n2.z; ++k) {
                    cube[i][j][k] = false;
                }
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i <= w; ++i) {
        for (int j = 1; j <= x; ++j) {
            for (int k = 1; k <= h; ++k) {
                cnt = cube[i][j][k] ? cnt + 1 : cnt;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}

