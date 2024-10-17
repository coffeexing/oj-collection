#include <bits/stdc++.h>
using namespace std;

int prime[10005];

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    for (int i = 2; i < 10000; i++) {
        prime[i] = is_prime(i);
    }
    
    int n;
    string str;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        str += to_string(i);
    }

    int cnt = 0;
    for (int i = 0; i < str.size() - 3; ++i) {
        if (str[i] == '0') {
            continue;
        }
        string num = str.substr(i, 4);
        if (prime[stoi(num)]) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}