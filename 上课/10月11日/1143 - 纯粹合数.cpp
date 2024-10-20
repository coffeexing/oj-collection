#include <bits/stdc++.h>
using namespace std;

int prime[1005] = {0};

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

bool perfectComposite(int n) {
    while (n) {
        if (prime[n] || n <= 1) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    for (int i = 2; i <= 1000; i++) {
        if (isPrime(i)) {
            prime[i] = 1;
        }
    }

    for (int i = 100; i <= 999; i++) {
        if (perfectComposite(i)) {
            cout << i << endl;
        }
    }

    return 0;

}