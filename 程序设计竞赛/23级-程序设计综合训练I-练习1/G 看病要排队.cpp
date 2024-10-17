#include <bits/stdc++.h>
using namespace std;

struct patient {
    int id, prior;
    bool operator < (const patient &p) const {
        return prior < p.prior || (prior == p.prior && id > p.id);
    }
};

int main() {
    int t;
    while (cin >> t) {
        vector<priority_queue<patient, vector<patient>>> pq(t + 2);
        int k = 1;
        for (int i = 0; i < t; i++) {
            string s;
            cin >> s;
            if (s == "IN") {
                int a, b;
                cin >> a >> b;
                pq[a].push({k++, b});
            } else if (s == "OUT") {
                int a;
                cin >> a;
                if (pq[a].empty()) {
                    cout << "EMPTY" << endl;
                } else {
                    cout << pq[a].top().id << endl;
                    pq[a].pop();
                }
            }
        }
    }
    return 0;
}