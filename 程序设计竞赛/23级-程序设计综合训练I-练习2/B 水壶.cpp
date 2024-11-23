#include <iostream>
#include <deque>
using namespace std;

struct Bottle {
    int m, n;
};

struct Operate {
    Bottle b;
    deque<string> op;
};

string list[6] = {"FILL(1)", "FILL(2)","POUR(1,2)", "POUR(2,1)", "DROP(1)", "DROP(2)"};

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    Bottle init{0, 0};
    Operate start{init, {}};
    deque<Operate> q;
    bool visited[100][100] = {0};
    q.push_back(start);

    while (!q.empty()) {
        Operate o = q.front();
        Bottle b = o.b;
        q.pop_front();

        if (!visited[b.m][b.n]) {
            visited[b.m][b.n] = true;
            if (b.m == C || b.n == C) {
                unsigned long long t = o.op.size();
                deque<string> res = o.op;
                cout << t << endl;

                while (!res.empty()) {
                    string r = res.front();
                    res.pop_front();
                    cout << r << endl;
                }

                return 0;
            }
        }

        Operate o0 = {{A, b.n}, o.op};
        o0.op.push_back(list[0]);
        if (!visited[o0.b.m][o0.b.n]) q.push_back(o0);

        Operate o1 = {{b.m, B}, o.op};
        o1.op.push_back(list[1]);
        if (!visited[o1.b.m][o1.b.n]) q.push_back(o1);

        Operate o2 = {{max(0, b.m + b.n - B), min(B, b.m + b.n)}, o.op};
        o2.op.push_back(list[2]);
        if (!visited[o2.b.m][o2.b.n]) q.push_back(o2);

        Operate o3 = {{min(A, b.m + b.n), max(0, b.m + b.n - A)}, o.op};
        o3.op.push_back(list[3]);
        if (!visited[o3.b.m][o3.b.n]) q.push_back(o3);

        Operate o4 = {{0, b.n}, o.op};
        o4.op.push_back(list[4]);
        if (!visited[o4.b.m][o4.b.n]) q.push_back(o4);

        Operate o5 = {{b.m, 0}, o.op};
        o5.op.push_back(list[5]);
        if (!visited[o5.b.m][o5.b.n]) q.push_back(o5);
    }

    cout << "impossible" << endl;

    return 0;
}
