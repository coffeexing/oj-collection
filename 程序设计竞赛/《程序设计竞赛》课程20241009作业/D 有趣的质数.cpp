#include <bits/stdc++.h>
using namespace std;

#define N 1000005

int dp[1000005] = {0};

vector<int> pri;
bool not_prime[N];

void pre(int n) {
    for (int i = 2; i <= n; ++i) {
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

int sum_each_pos(int n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

void pre2(int n) {
    dp[0] = dp[1] = 0;
    for (int i = 2; i < n; ++i) {
        if (!not_prime[i] && !not_prime[sum_each_pos(i)]) {
            dp[i] = dp[i - 1] + 1;
        } else {
            dp[i] = dp[i - 1];
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    pre(N);
    pre2(N);

    while (T--) {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", dp[b] - dp[a - 1]);
    }

    return 0;
}