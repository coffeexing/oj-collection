#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, sum = 0;
        scanf("%d", &n);

        vector<int> nums(n);
        vector<int> cost(n);

        for (int i = 0; i < n ; i++) {
            scanf("%d", &nums[i]);
            sum += nums[i];
            cost[i] = nums[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] >= nums[j]) {
                    cost[i] = max(cost[i], cost[j] + nums[i]);
                }
            }
        }

        int total = 0;
        for (int i = 0; i < n; i++) {
            total = max(total, cost[i]);
        }

        cout << sum - total << endl;
    }

    return 0;
}