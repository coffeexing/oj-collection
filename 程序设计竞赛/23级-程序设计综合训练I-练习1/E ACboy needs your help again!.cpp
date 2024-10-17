#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        deque<int> d;

        if (s == "FIFO") {
            string op;
            while (n--) {
                cin >> op;
                if  (op == "IN") {
                    int x;
                    cin >> x;
                    d.push_back(x);
                } else if (op == "OUT") {
                    if (d.empty()) {
                        cout << "None" << endl;
                        continue;
                    } else {
                        cout << d.front() << endl;
                        d.pop_front();
                    }
                }
            }
        } else if (s == "FILO") {
            string op;
            while (n--) {
                cin >> op;
                if  (op == "IN") {
                    int x;
                    cin >> x;
                    d.push_back(x);
                } else if (op == "OUT") {
                    if (d.empty()) {
                        cout << "None" << endl;
                        continue;
                    } else {
                        cout << d.back() << endl;
                        d.pop_back();
                    }
                }
            }
        }



    }

    return 0;
}
