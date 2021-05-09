#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, res = 1;
    cin >> n;
    vector<int> a(n);
    for (auto& e : a) cin >> e;
    sort(a.begin(), a.end());

    for (size_t i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) res++;
    }
    cout << res;
    return 0;
}
