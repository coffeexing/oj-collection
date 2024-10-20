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
    int N;
    cin >> N;

    for (int i = 2; i <= N - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            cout << i << " " << i + 2 << endl;
        }
    }

    return 0;
}