#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);cin.tie(0);
     
    int x, y;
    cin >> x;
     
    vector<int> vec;
    y = x;
     
    while (y != 0) {
        vec.push_back(y % 10);
        y /= 10;
    }
    sort(vec.begin(), vec.end());
     
    y = 0;
    do {
        for(int i = 0; i < vec.size(); i++) {  
            y = y * 10 + vec[i];
        }
         
        if (x < y && x != y) {
            break;
        } else {
            y = 0;
        }
    } while (next_permutation(vec.begin(), vec.end()));
 
    cout << y;
    
    return 0;  
}
