#include <iostream>
#include <deque>
#include <vector>
using namespace std;

struct Farmer {
    int pos;
    int t;
};

int main() {
    int N, K;
    while (cin >> N >> K) {
        bool visited[100005] = {false};

        deque<Farmer> q;
        q.push_back({N, 0});

        while (!q.empty()) {
            Farmer f = q.front();
            q.pop_front();
            int x = f.pos;

            if (x == K) {
                cout << f.t << endl;
                break;
            }

            if (!visited[x]) {
                visited[x] = true;
            }

            vector<int> next = {x - 1, x + 1, x * 2};

            for (int i = 0; i < 3; ++i) {
                if (next[i] >= 0 && next[i] <= 100000 && !visited[next[i]]) {
                    q.push_back({next[i], f.t + 1});
                }
            }
        }
    }


}