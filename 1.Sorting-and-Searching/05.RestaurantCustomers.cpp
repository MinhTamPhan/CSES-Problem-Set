#include <bits/stdc++.h>
using namespace std;
/**
 * Bạn được cho biết thời gian đến và đi của n khách hàng trong một nhà hàng. 
 * Số lượng khách hàng tối đa là bao nhiêu?
 * 
 * Bạn có thể cho rằng tất cả thời gian đến và đi là khác nhau.
 * 
 * Ý tưởng: tạo thành 1 cặp thời gian đến và đi với trọng số lần lượt là 1 và -1
 * sau đó sort lại mảng. khi đó nếu thời gian đến = thời đi của 1 khách hàng là thì
 * trọng số -1 sẽ đến trước
 * duyêt qua các cặp trọng số đó cộng vào biến sum
 */
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> customers;

    for (size_t i = 0; i < n; i++) {
        int c, v;
        cin >> c >> v;
        customers.push_back({c, 1});
        customers.push_back({v, -1});
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
