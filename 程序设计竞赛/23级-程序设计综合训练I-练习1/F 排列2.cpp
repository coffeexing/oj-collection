#include <bits/stdc++.h>
using namespace std;

int main() {
//    freopen("ans/in.txt", "r", stdin);
//    freopen("ans/out.txt", "w", stdout);
    int a, b, c, d;
    while (scanf("%d%d%d%d", &a, &b, &c, &d) != EOF) {
        if (a == 0 && b == 0 && c == 0 && d == 0) {
            break;
        }
        vector<int> v{a, b, c, d};
        vector<int> f(10, 0);
        f[0] = 1;
        int cnt = 0;
        sort(v.begin(), v.end());
        do {
            if (v[0] == 0) {
                continue;
            }
            if (f[v[0]] == 0) {
                if (cnt != 0) {
                    printf("\n");
                }
                f[v[0]] = 1;
            }
            printf("%d%d%d%d ", v[0], v[1], v[2], v[3]);
            cnt++;
        } while (next_permutation(v.begin(), v.end()));
        printf("\n");
    }
    return 0;
}