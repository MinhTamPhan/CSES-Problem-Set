#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/*
** có n application và m căn hộ. tìm số cách tối ta để phân phối m căn hộ cho n application
** sao cho app[i] +- k <= apart[i] không quá k
**
** ý tưởng sort tăng đần application và apartments
** lăp qua các căn hộ và application
**      - nếu nằm trong khoảng k thì tăng biến đếm. chuyển sang app và apart tiếp theo
**      - nếu app đang xét < apart đang xét chuyển đến app tiếp theo
**      - nếu apart đang xét < app đang xét chuyển đến apart tiếp theo
*/

int main() {
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    vector<int> applicants(n), apartments(m);
    for (auto &e : applicants) cin >> e;
    for (auto &e : apartments) cin >> e;
    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (abs(applicants[i] - apartments[j]) <= k) {
            ans++;
            i++;
            j++;
        } else if (applicants[i] < apartments[j])
            i++;
        else if (applicants[i] > apartments[j])
            j++;
    }
    cout << ans << endl;
}
