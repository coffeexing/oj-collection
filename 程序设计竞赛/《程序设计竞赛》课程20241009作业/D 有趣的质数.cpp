#include <bits/stdc++.h>
using namespace std;

int prime[1000005] = {0};
int dp[1000005] = {0};

int is_prime(int n) {
    if (prime[n] != 0) {
        return prime[n] == 1;
    }
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return  prime[n] = 1;
}

int sum_each_pos(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;

        int cnt = 0;
        for (int i = a; i <= b; ++i) {
            if (dp[i] || is_prime(i) && is_prime(sum_each_pos(i))) {
                dp[i] = 1;
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}