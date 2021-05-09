#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int64_t nums[n];
    for (size_t i = 0; i < n; i++) cin >> nums[i];

    int64_t best = 0, sum = 0;
    for (int k = 0; k < n; k++) {
        sum = max(nums[k], sum + nums[k]);
        best = max(best, sum);
    }
    cout << best << "\n";

    return 0;
}
