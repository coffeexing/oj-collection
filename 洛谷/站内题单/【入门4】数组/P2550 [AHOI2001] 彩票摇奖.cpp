#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ticket;
    vector<int> cnt(8, 0);
    for (int i = 0; i < 7; ++i) {
        int x;
        cin >> x;
        ticket.push_back(x);
    }

    while (n--) {
        int c = 0;
        for (int i = 0; i < 7; ++i) {
            int x;
            cin >> x;
            if (find(ticket.begin(), ticket.end(), x) != ticket.end()) {
                c++;
            }
        }
        cnt[c]++;
    }

    for (int i = 7; i >= 1; --i) {
        cout << cnt[i] << " ";
    }

    return 0;
}