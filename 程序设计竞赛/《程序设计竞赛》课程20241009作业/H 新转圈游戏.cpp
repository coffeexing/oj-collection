#include <bits/stdc++.h>
using namespace std;

vector<int> r(1000005, 0);

int main() {
    int n;
    scanf("%d", &n);

    vector<int> a(n);
    vector<int> k(n, 0);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (r[a[i]] != 0) {
            k[i] = r[a[i]];
            continue;
        }

        bool f = false;
        for (int j = a[i]; j > 0; j--) {
            if (a[i] % j == 0 && r[j] != 0) {
                k[i] = r[j % a[i]] * r[a[i]];
                f = true;
                break;
            }
        }


        if (f) {
            continue;
        }

        for (int j = 0; j < n; j++) {
            if (a[i] % a[j] == 0 && i != j) {
                k[i]++;
            }
        }
        r[a[i]] = max(k[i], r[a[i]]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", k[i]);
    }

    return 0;
}
