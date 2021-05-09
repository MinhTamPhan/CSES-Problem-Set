#include <bits/stdc++.h>
using namespace std;

#define MAXN 100000

int main() {
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> queries;
    vector<int> arr(n);
    for (auto &el : arr) cin >> el;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        queries.push_back({l, r});
    }

    int log[MAXN + 1];
    log[1] = 0;
    for (int i = 2; i <= MAXN; i++)
        log[i] = log[i / 2] + 1;
    int K = log[MAXN];
    int st[MAXN][K + 1];

    for (int i = 0; i < n; i++) {
        st[i][0] = arr[i];
    }

    for (int j = 1; j <= K; j++)
        for (int i = 0; i + (1 << j) <= n; i++)
            st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
    for (size_t i = 0; i < q; i++) {
        int L, R;
        tie(L, R) = queries[i];
        L -= 1;
        R -= 1;
        int j = log[R - L + 1];
        int minimum = min(st[L][j], st[R - (1 << j) + 1][j]);
        cout << minimum << endl;
    }
    return 0;
}
