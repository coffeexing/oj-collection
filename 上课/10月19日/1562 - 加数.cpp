#include <bits/stdc++.h>
using namespace std;

string add_num(int x) {
    if (x == 0) {
        return "";
    }
    return to_string(x) + add_num(x / 2);
}

int main() {
    int n;
    cin >> n;
    cout << add_num(n).size() << endl;

    return 0;
}