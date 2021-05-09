#include <bits/stdc++.h>
using namespace std;
/**
 * Bạn được cho biết thời gian đến và đi của n khách hàng trong một nhà hàng. 
 * Số lượng khách hàng tối đa là bao nhiêu?
 * 
 * Bạn có thể cho rằng tất cả thời gian đến và đi là khác nhau.
 */
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> customers;

    for (size_t i = 0; i < n; i++) {
        int c, v;
        cin >> c >> v;
        customers.push_back(make_pair(c, 1));
        customers.push_back(make_pair(v, -1));
    }
    sort(customers.begin(), customers.end());

    int sum = 0, ans = 0;
    for (size_t i = 0; i < customers.size(); i++) {
        sum += customers[i].second;
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
