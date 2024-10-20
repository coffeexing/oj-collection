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
    cout << "������A�������ӵ���Ŀ��";
    cin >> left;
    cout << "��A���ϵ�" << left << "������ȫ���ƶ���C�Ĳ���Ϊ��" << endl;
    Hanoi(left, 'A', 'B', 'C');
    return 0;
}