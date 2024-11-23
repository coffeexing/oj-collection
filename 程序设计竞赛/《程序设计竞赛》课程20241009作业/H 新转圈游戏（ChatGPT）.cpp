#include <unordered_map>
#include <vector>
#include <cstdio>
using namespace std;

unordered_map<int, int> r;

int main() {
    int n;
    scanf("%d", &n);

    vector<int> a(n);
    vector<int> k(n, 0);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (r.count(a[i])) {
            k[i] = r[a[i]];
            continue;
        }

        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] % a[j] == 0 && i != j) {
                cnt++;
            }
        }

        k[i] = cnt;
        r[a[i]] = cnt;
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", k[i]);
    }

    return 0;
}
