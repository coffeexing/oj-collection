#include <bits/stdc++.h>
using namespace std;

bool perfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int n;
    cin >> n;

    if (perfectNumber(n)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}