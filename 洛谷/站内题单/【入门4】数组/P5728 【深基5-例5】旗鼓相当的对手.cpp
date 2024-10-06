#include <bits/stdc++.h>
using namespace std;

struct Stu {
    int chinese;
    int math;
    int english;
    int sum;
};

bool isMatched(Stu a, Stu b) {
    if (abs(a.chinese - b.chinese) > 5 || abs(a.math - b.math) > 5 || abs(a.english - b.english) > 5) {
        return false;
    }

    if (abs(a.sum - b.sum) > 10) {
        return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    vector<Stu> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].chinese >> v[i].math >> v[i].english;
        v[i].sum = v[i].chinese + v[i].math + v[i].english;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isMatched(v[i], v[j])) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}