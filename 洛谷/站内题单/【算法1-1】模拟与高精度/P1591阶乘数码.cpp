#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int t, n, a, carry, res, cnt;
    int arr0[10000] = {0}, arr[10000];
    arr0[9999] = 1;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> a;
        memmove(arr, arr0, 10000 * sizeof(int));
        carry = 0;
        cnt = 0;
        for (int j = 2; j <= n; ++j) {
            for (int k = 9999; k >= 0; --k) {
                res = arr[k] * j + carry;
                arr[k] = res % 10;
                carry = res / 10;
            }
        }
        if (a == 0) {
            res = 0;
            for (int j: arr) {
                if (res == 1 && j == a) {
                    cnt++;
                } else if (j != a) {
                    res = 1;
                }
            }
        } else {
            for (int j: arr) {
                if (j == a) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
