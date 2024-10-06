#include <iostream>
using namespace std;
using ll = long long int; 

int n, m;
int map[25][25] = {0};
ll dp[25][25] = {0};
int mx[9] = {0, 2, 1, -1, -2, -2, -1, 1, 2};
int my[9] = {0, 1, 2, 2, 1, -1, -2, -2, -1};

bool check(int x, int y) {
	return map[x][y] == 0;
}

ll solve() {
    dp[0][0] = check(0, 0) ? 1 : 0;
    for (int i = 1; i <= m; i++) {
        dp[0][i] = check(0, i) ? dp[0][i-1] : 0;
    }
    for (int i = 1; i <= n; i++) {
        dp[i][0] = check(i, 0) ? dp[i-1][0] : 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (check(i, j)) {
                ll a = dp[i-1][j];
                ll b = dp[i][j-1];
                dp[i][j] = a + b;
            } else {
                dp[i][j] = 0;
            }
        }
    }
    
    return dp[n][m];
}



int main() {
	int x, y;
	scanf("%d%d%d%d", &n, &m, &x, &y);
	for (int i = 0; i < 9; i++) {
		int nx = x + mx[i];
        int ny = y + my[i];
		if (nx >= 0 && nx <= n && ny >= 0 && ny <= m) {
            map[nx][ny] = 1;
        }
	}
	cout << solve();
	return 0;
}
