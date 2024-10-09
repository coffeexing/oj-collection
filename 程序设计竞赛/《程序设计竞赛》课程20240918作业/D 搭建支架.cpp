#include <bits/stdc++.h>
using namespace std;

struct Line {
    int H;
    double X1, X2;
};

bool cmp(Line l1, Line l2) {
    return l1.H > l2.H;
}

int main() {
    int N;
    cin >> N;
    vector<Line> lines(N + 1);

    for (int i = 0; i < N; ++i) {
        int h, x1, x2;
        cin >> h >> x1 >> x2;
        lines[i].H = h;
        lines[i].X1 = x1;
        lines[i].X2 = x2;
    }

    lines[N].H = 0;
    lines[N].X1 = 1;
    lines[N].X2 = 10000;

    int sum = 0;

    sort(lines.begin(), lines.end(), cmp);

    for (int i = 0; i < N; i++) {
        Line l_i = lines[i];
        bool bx1 = false, bx2 = false;
        for (int j = 0; j <= N; j++) {
            Line l_j = lines[j];
            if (i == j || l_i.H <= l_j.H) {
                continue;
            }

            if (!bx1 && l_i.X1 + 0.5 > l_j.X1 && l_i.X1 + 0.5 < l_j.X2) {
                bx1 = true;
                sum += l_i.H - l_j.H;
            }

            if (!bx2 && l_i.X2 - 0.5 > l_j.X1 && l_i.X2 - 0.5 < l_j.X2) {
                bx2 = true;
                sum += l_i.H - l_j.H;
            }

            if (bx1 && bx2) {
                break;
            }
        }
    }

    cout << sum << endl;

    return 0;
}