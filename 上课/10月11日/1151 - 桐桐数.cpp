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

int main()
    int n;
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0 && isPrime(i) && isPrime(n / i)) {
            cout << "It's a Tongtong number." << endl;
            return 0;
        }
    }

    cout << "It's not a Tongtong number." << endl;

    return 0;
}