#include <bits/stdc++.h>
using namespace std;

int num_root(int x) {
    if (x < 10) {
        return x;
    }
    int sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return num_root(sum);
}

int main() {
    int n;
    cin >> n;
    cout << num_root(n) << endl;

    return 0;
}