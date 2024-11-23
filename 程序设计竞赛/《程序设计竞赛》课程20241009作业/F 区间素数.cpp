#include <bits/stdc++.h>
using namespace std;
using LL = long long;

#define N 2147483647
#define SqrtN 46341

int dp[1000005] = {0};

vector<int> pri;
bool not_prime[SqrtN * 2];

void pre(int n) {
    for (int i = 2; i < n; ++i) {
        if (!not_prime[i]) {
            pri.push_back(i);
        }
        for (int pri_j : pri) {
            if (i * pri_j > n) break;
            not_prime[i * pri_j] = true;
            if (i % pri_j == 0) {
                break;
            }
        }
    }
}

int main() {
    pre(50000);

    int l, r;
    cin >> l >> r;
    l = l == 1 ? 2 : l;

    for (int i = 0; pri[i] <= sqrt(r); ++i) {
        int p = pri[i];
        LL start = max((((LL)ceil(double (l) / double(p)))* p), (LL) 2 * p);//大于等于l整除p的最小值
        for (LL j = start; j <= r; j += p)
            dp[j - l] = true;
    }

    int res = 0;
    for (int i = 0; i <= r - l; i++) {
        if (!dp[i]) {
            res++;
        }
    }

    cout << res << endl;

    return 0;
}