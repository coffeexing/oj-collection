#include <bits/stdc++.h>
using namespace std;

int num[5] = {6, 28, 496, 8128, 33550336};

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
    int N;
    cin >> N;

    for (int i = 0; i < 5; i++) {
        if (N < num[i]) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}