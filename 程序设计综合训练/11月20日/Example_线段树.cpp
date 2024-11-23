#include <bits/stdc++.h>
using namespace std;

#define N 10005
int tree[4 * N], a[N], mark[4 * N];
int n;

void build_tree(int p = 1, int l = 1, int r = n) {
    if (l == r) {
        tree[p] = a[l];
        return;
    }
    int mid = (l + r) / 2;
    build_tree(p * 2, l, mid);
    build_tree(p * 2 + 1, mid + 1, r);
    tree[p] = max(tree[p * 2], tree[p * 2 + 1]);
}

int query_tree(int l, int r, int p = 1, int cl = 1, int cr = n) {
    if (l <= cl && cr <= r) {
        return tree[p];
    }
    int ans = INT_MIN;
    int mid = (cl + cr) >> 1;
    if (l <= mid) {
        ans = max(ans, query_tree(l, r, p << 1, cl, mid));
    }
    if (r > mid) {
        ans = max(ans, query_tree(l, r, p << 1 | 1, mid + 1, cr));
    }
}

void update_tree_single(int i, int v, int p = 1, int cl = 1, int cr = n) {
    if (cl == cr && cl == i) {
        tree[p] = v;
        return;
    }
    int mid = (cl + cr) >> 1;
    if (i <= mid) {
        update_tree_single(i, v, p << 1, cl, mid);
    } else {
        update_tree_single(i, v, p << 1 | 1, mid + 1, cr);
    }
    tree[p] = max(tree[p << 1], tree[p << 1 | 1]);
}

void push_down(int p) {
    if (mark[p]) {
        tree[p << 1] = tree[p << 1 | 1] += mark[p];
        mark[p << 1] = mark[p << 1 | 1] += mark[p];
        mark[p] = 0;
    }
}

void update_tree(int l, int r, int v, int p = 1, int cl = 1, int cr = n) {
    if (l <= cl && cr <= r) {
        tree[p] += v;
        mark[p] += v;
        return;
    }
    push_down(p);
    int mid = (cl + cr) >> 1;
    if (l <= mid) {
        update_tree(l, r, v, p << 1, cl, mid);
    }
    if (r > mid) {
        update_tree(l, r, v, p << 1 | 1, mid + 1, cr);
    }
    tree[p] = max(tree[p << 1], tree[p << 1 | 1]);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build_tree();
//    int i, v;
//    cin >> i >> v;
//    update_tree(i, v);
    int i, j, v;
    cin >> i >> j >> v;
    update_tree(i, j, v);
    int l, r;
    cin >> l >> r;
    cout << query_tree(l, r) << endl;

    return 0;
}