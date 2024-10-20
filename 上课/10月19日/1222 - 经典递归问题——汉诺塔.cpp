#include <bits/stdc++.h>
using namespace std;

void move(int no, const string& from, const string& to) {
    cout << from << " To " << to << endl;
}

void hanoi(int n, const string& a, const string& b, const string& c) {
    if (n == 1) {
        move(n, a, c);
        return;
    }
    hanoi(n - 1, a, c, b);
    move(n, a, c);
    hanoi(n - 1, b, a, c);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, "A", "B", "C");
    return 0;
}
