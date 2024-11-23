#include <bits/stdc++.h>
using namespace std;

int a[10000005];
int n, mx = -100;
int b[1000005];
int cnt[1000005];

void get_factor() {
    for (int i = 1; i <= 1000000; i++) {
        if (!b[i]) continue;
        for (int j = 1; j <= 1000000 / i; j++) {
            if (b[i * j]) cnt[i * j] += b[i];
            if (i * j == i) cnt[i]--;
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    get_factor();
    for (int i = 1; i <= n; i++) {
        printf("%d\n", cnt[a[i]]);
    }
    return 0;
}
