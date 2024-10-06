#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m, t, s;
    cin >> m >> t >> s;
    int n = s / t + (s % t == 0 ? 0 : 1);
    if (t == 0 || n >= m) {
        cout << 0;
    } else {
        cout << m - n;
    }
    return 0;
}
