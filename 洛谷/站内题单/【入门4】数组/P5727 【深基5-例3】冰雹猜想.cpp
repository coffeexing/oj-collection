#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> q;

    while (n != 1) {
        q.push_front(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }

    q.push_front(1);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop_front();
    }

    return 0;
}
