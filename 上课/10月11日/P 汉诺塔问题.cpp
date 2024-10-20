#include <bits/stdc++.h>
using namespace std;

void Hanoi(int n, char a, char b, char c) {
    if (n == 1)
        cout << a << "----->" << c << endl;
    else {
        Hanoi(n - 1, a, c, b);
        Hanoi(1, a, b, c);
        Hanoi(n - 1, b, a, c);
    }
}

int main() {
    int left;
    cout << "请输入A座上盘子的数目：";
    cin >> left;
    cout << "将A座上的" << left << "个盘子全部移动到C的步骤为：" << endl;
    Hanoi(left, 'A', 'B', 'C');
    return 0;
}