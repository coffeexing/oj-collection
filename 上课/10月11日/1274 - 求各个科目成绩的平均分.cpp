#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double chinese = 0, math = 0, english = 0;

    for (int i = 0; i < n; i++) {
        double c, m, e;
        cin >> c >> m >> e;
        chinese += c;
        math += m;
        english += e;
    }

    printf("%.1f %.1f %.1f\n", chinese / n, math / n, english / n);

    return 0;
}