#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

string add(string a, string b, int base) {
    string res;
    int carry = 0;
    for (int i = 0; i < a.size() || i < b.size(); ++i) {
        int sum = carry;
        if (i < a.size()) {
            if (a[i] >= 'A') {
                sum += a[i] - 'A' + 10;
            } else {
                sum += a[i] - '0';
            }
        }
        if (i < b.size()) {
            if (b[i] >= 'A') {
                sum += b[i] - 'A' + 10;
            } else {
                sum += b[i] - '0';
            }
        }
        int temp = sum % base;
        if (temp > 9) {
            res += temp - 10 + 'A';
        } else {
            res += temp + '0';
        }
        carry = sum / base;
    }
    if (carry) {
        res += carry + '0';
    }
    return res;
}

int main() {
    int n;
    string m;
    cin >> n >> m;
    m = string(m.rbegin(), m.rend());

    int cnt = 0;
    while (cnt <= 30) {
        if (isPalindrome(m)) {
            cout << cnt << endl;
            return 0;
        }
        m = add(m, string(m.rbegin(), m.rend()), n);
        ++cnt;
    }

    cout << "Impossible!" << endl;

    return 0;
}