#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%02d", num++);
        }
        printf("\n");
    }

    printf("\n");
    num = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            printf("  ");
        }
        for (int j = 0; j < i; ++j) {
            printf("%02d", num++);
        }
        printf("\n");
    }

    return 0;
}