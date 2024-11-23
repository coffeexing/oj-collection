#include <bits/stdc++.h>
using namespace std;

const int N = 20 + 5;
int w, h, ans;
char a[N][N];
int dx[4] = {0, -1, 0, 1}, dy[4] = {-1, 0, 1, 0};

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int cx = x + dx[i], cy = y + dy[i];
        if (cx >=0 && cx<h && cy >=0 && cy < w && a[cx][cy] == '.') {
            a[cx][cy] = '#';
            ans++;
            dfs(cx, cy);
        }
    }
}

int main() {
    while(cin >> w >> h && w && h) {
        int x, y;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> a[i][j];
                if (a[i][j] == '@') {
                    x = i;
                    y = j;
                }
            }
        }

        ans = 1;
        dfs(x, y);

        cout << ans << endl;
    }

    return 0;
}
