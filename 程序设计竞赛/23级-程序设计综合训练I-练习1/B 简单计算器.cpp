#include <bits/stdc++.h>
using namespace std;

int main() {
    string formula;
    while (getline(cin, formula)) {
        if (formula == "0") {
            break;
        }

        deque<double> num;
        deque<char> op;
        stringstream ss(formula);

        string s;
        while (ss >> s) {
            if (s == "*" || s == "/") {
                double x;
                ss >> x;
                if (s == "*") {
                    num.back() *= x;
                } else {
                    num.back() /= x;
                }
            } else if (s == "+" || s == "-") {
                op.push_back(s[0]);
            } else {
                num.push_back(stoi(s));
            }
        }
        double ans = num[0];
        num.pop_front();
        while (!op.empty()) {
            if (op.front() == '+') {
                ans += num[0];
            } else {
                ans -= num[0];
            }
            num.pop_front();
            op.pop_front();
        }

        cout << setprecision(2) << fixed << ans << endl;
    }

    return 0;
}
