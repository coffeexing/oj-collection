#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);cin.tie(0);
     
    int n, t = 0;
    int a, b, c;
    cin >> n;
     
    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9};
    do {
        for (int i = 1; i < 8; i++) {
            for(int j = i + 1; j < 9; j++) {  
                a = 0, b = 0, c = 0;
                for (int x = 0; x < i; x++) {
                    a = a * 10 + vec[x];
                }
                for (int x = i; x < j; x++) {
                    b = b * 10 + vec[x];
                }
                for (int x = j; x < 9; x++) {
                    c = c * 10 + vec[x];
                }

                if (a + b / c == n && b % c == 0) {
                    t++;
                }
                 
                if (a > n) {
                    break;
                }
            }
             
            if (a > n) {
                break;
            }
        }
    } while (next_permutation(vec.begin(), vec.end()));

    cout << t;
     
    return 0;
}
