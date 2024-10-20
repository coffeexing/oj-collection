#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> prime;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            prime.push_back(i);
        }
    }

    for (int i = 0; i < prime.size(); i++) {
        cout << prime[i];
        if (i % 5 == 4) {
            cout << endl;
        } else {
            cout << " ";
        }
    }

    return 0;
}
