#include <bits/stdc++.h>
using namespace std;

int main() {
    string formula;
    while (getline(cin, formula)) {
        cout << formula << endl;

        if (formula == "0") {
            break;
        }

        stack<double> num;
        stack<char> op;
        stringstream ss(formula);

        string s;
        while (ss >> s || !op.empty() || num.size() != 1) {
            if (s == "+" || s == "-") {
                if (op.empty()) {
                    op.push(s[0]);
                }
                if (op.top() == '*' || op.top() == '/') {
                    int b = num.top();
                    num.pop();
                    int a = num.top();
                    num.pop();
                    char c = op.top();
                    op.pop();
                    if (c == '*') {
                        num.push(a * b);
                    } else {
                        num.push(static_cast<double>(a) / b);
                    }
                }
            } else if (s == "*" || s == "/") {
                if (op.empty()) {
                    op.push(s[0]);
                }
                int x;
                ss >> x;
                if (s == "*") {
                    num.push(num.top() * x);
                    num.pop();
                } else {
                    num.push(static_cast<double>(num.top()) / x);
                    num.pop();
                }
            } else {
                num.push(stoi(s));
            }
        }

        cout << num.top() << endl;
    }

    return 0;
}