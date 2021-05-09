#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, tmp;
    cin >> n >> q;
    vector<uint64_t> preSum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        preSum[i] = preSum[i - 1] + tmp;
    }
    int l, r;
    while (q--) {
        cin >> l >> r;
        cout << preSum[r] - preSum[l - 1] << endl;
    }
    return 0;
}
