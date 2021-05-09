#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/*
** có n cái vé vói giá vé xác định và m khách hàng, mỗi khác hàng có 1 số tiền nhất định
** với mỗi khách hàng sẽ lần lượt mua 1 vé gần nhất nhỏ hơn số tiền họ có
** nếu không mua được in ra -1, mỗi vé chỉ được mua bởi 1 người.
**
** ý tưởng đùng multiset và lower_bound
**/

int main() {
    int n, m;
    cin >> n >> m;
    multiset<int, greater<int>> tickets;
    vector<int> customers(m);
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        tickets.insert(tmp);
    }
    for (auto &e : customers) cin >> e;
    for (size_t i = 0; i < m; i++) {
        auto it = tickets.lower_bound(customers[i]);
        if (it == tickets.end())
            cout << -1;
        else {
            cout << *it;
            tickets.erase(it);
        }
        cout << endl;
    }
    return 0;
}
