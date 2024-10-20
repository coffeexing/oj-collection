#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char h1[3], m1[100] = {0};
    char h2[100] = {0}, m2[100] = {0};
    scanf("%s:%s", h1, m1);
    scanf("%s:%s", h2, m2);
    int t1 = ((h1[0] - '0') * 10 + (h1[1] - '0')) * 60 + ((m1[0] - '0') * 10 + (m1[1] - '0'));
    int t2 = ((h2[0] - '0') * 10 + (h2[1] - '0')) * 60 + ((m2[0] - '0') * 10 + (m2[1] - '0'));
    int t = t2 - t1;

    printf("%d", t);


    return 0;
}
