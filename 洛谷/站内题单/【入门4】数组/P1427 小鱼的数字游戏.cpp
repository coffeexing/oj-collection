#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> q;
    int x;

    while (cin >> x) {
        if (x == 0) {
            break;
        }
        q.push_back(x);
    }

    while (!q.empty()) {
        cout << q.back() << " ";
        q.pop_back();
    }

    return 0;
}