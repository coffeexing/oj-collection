#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<int> cnt(10, 0);

    for (int i = M; i <= N; ++i) {
        int x = i;
        while (x) {
            cnt[x % 10]++;
            x /= 10;
        }
    }

    for (int i = 0; i < 10; ++i) {
        cout << cnt[i] << " ";
    }

    return 0;
}