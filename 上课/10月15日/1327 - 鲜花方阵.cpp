#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int h = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == h) {
                cout << setw(3) << 0;
            } else if ((i - h) + (j - h) == h) {
                cout << setw(3) << 0;
            } else if (i == j - h) {
                cout << setw(3) << 0;
            } else if (i - h == j) {
                cout << setw(3) << 0;
            } else if (i == h && j == h) {
                cout << setw(3) << 0;
            } else {
                cout << setw(3) << 1;
            }
        }
        cout << endl;
    }

    return 0;
}
