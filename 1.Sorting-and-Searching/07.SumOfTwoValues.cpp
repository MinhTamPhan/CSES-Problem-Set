#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    vector<pair<uint64_t, int>> nums;
    for (size_t i = 0; i < n; i++) {
        int v;
        cin >> v;
        nums.push_back({v, i});
    }
    int i = 0, j = n - 1;
    sort(nums.begin(), nums.end());

    while (i < j) {
        if (nums[i].first + nums[j].first > target)
            j--;
        else if (nums[i].first + nums[j].first < target)
            i++;
        else {
            cout << nums[i].second + 1 << " " << nums[j].second + 1 << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
