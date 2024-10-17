#include <bits/stdc++.h>
using namespace std;

string d0[5] = {"XXX", "X.X", "X.X", "X.X", "XXX"};

string d1[5] = {"..X", "..X", "..X", "..X", "..X"};

string d2[5] = {"XXX", "..X", "XXX", "X..", "XXX"};

string d3[5] = {"XXX", "..X", "XXX", "..X", "XXX"};

string d4[5] = {"X.X", "X.X", "XXX", "..X", "..X"};

string d5[5] = {"XXX", "X..", "XXX", "..X", "XXX"};

string d6[5] = {"XXX", "X..", "XXX", "X.X", "XXX"};

string d7[5] = {"XXX", "..X", "..X", "..X", "..X"};

string d8[5] = {"XXX", "X.X", "XXX", "X.X", "XXX"};

string d9[5] = {"XXX", "X.X", "XXX", "..X", "XXX"};

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (s[j] == '0') {
                    cout << d0[i][k];
                } else if (s[j] == '1') {
                    cout << d1[i][k];
                } else if (s[j] == '2') {
                    cout << d2[i][k];
                } else if (s[j] == '3') {
                    cout << d3[i][k];
                } else if (s[j] == '4') {
                    cout << d4[i][k];
                } else if (s[j] == '5') {
                    cout << d5[i][k];
                } else if (s[j] == '6') {
                    cout << d6[i][k];
                } else if (s[j] == '7') {
                    cout << d7[i][k];
                } else if (s[j] == '8') {
                    cout << d8[i][k];
                } else if (s[j] == '9') {
                    cout << d9[i][k];
                }
            }
            if (j != n - 1) {
                cout << ".";
            } else {
                cout << endl;
            }
        }

    }

    return 0;
}