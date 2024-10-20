#include <bits/stdc++.h>
using namespace std;

int main() {
    string group, ufo;
    cin >> ufo >> group;

    long long g = 1, u = 1;
    for (char i : ufo) {
        u *= static_cast<long long>(i - 'A' + 1);
    }

    for (char i : group) {
        g *= static_cast<long long>(i - 'A' + 1);
    }

    if (g % 47 == u % 47) {
        cout << "GO" << endl;
    } else {
        cout << "STAY" << endl;
    }

    return 0;
}