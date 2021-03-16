#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n;
    cin >> n;
    ll a[n], total = 0, ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    for (int subset = 0; subset < (1 << n); subset++) {
        ll sumSubset = 0;
        for (int i = 0; i < n; i++)
            if (subset & (1 << i)) sumSubset += a[i];
        ll diffSum = abs(total - 2 * sumSubset);  // (total - sumSubset) - sumSubset
        ans = min(ans, diffSum);
    }
    cout << ans << endl;
    return 0;
}
