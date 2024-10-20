#include <bits/stdc++.h>
#define maxn 100
using namespace std;

struct Bigint {
    int len, a[maxn];

    Bigint(int x = 0) {
        memset(a, 0, sizeof(a));
        for (len = 1; x; len++) {
            a[len] = x % 10;
            x /= 10;
        }
        len--;
    }

    int &operator[](int i) {
        return a[i];
    }

    void flatten(int L) {
        len = L;
        for (int i = 1; i <= len; i++) {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
        for (; !a[len];) {
            len--;
        }
    }

    void print() {
        for (int i = max(len, 1); i >= 1; i--) {
            printf("%d", a[i]);
        }
    }
};

Bigint operator+(Bigint a, Bigint b) {
    Bigint c;
    int len = max(a.len, b.len);
    for (int i = 1; i <= len; i++) {
        c[i] += a[i] + b[i];
    }
    c.flatten(len + 1);
    return c;
}

Bigint operator*(Bigint a, int b) {
    Bigint c;
    int len = a.len;
    for (int i = 1; i <= len; i++) {
        c[i] = a[i] * b;
    }
    c.flatten(len + 11);
    return c;
}

vector<Bigint> path(105, Bigint(0));

Bigint bee_path(int x, int y) {
    if (path[x].len) {
        return path[x];
    }
    if (x == y) {
        return Bigint(1);
    } else if (x > y) {
        return Bigint(0);
    }
    return path[x] = bee_path(x + 1, y) + bee_path(x + 2, y);
}

int main() {
    int M, N;
    cin >> M >> N;
    Bigint ans = bee_path(M, N);
    ans.print();

    return 0;
}