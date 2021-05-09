#include <bits/stdc++.h>
using namespace std;
/**
 * Trong một liên hoan phim nn bộ phim sẽ được trình chiếu.
 * Bạn biết thời gian bắt đầu và kết thúc của mỗi bộ phim.
 * Số lượng phim tối đa bạn có thể xem toàn bộ là bao nhiêu?
 * 
 * ý tưởng sort mảng chứa thời gian kết thúc và bắt đầu.
 * khi đó các cặp cùng giờ kết thúc mà có giờ bắt đầu lớn hơn sẽ đứng sau
 * lặp qua mảng đã sort, và khởi tạo @end lưu giữ thời gian kết thúc của bộ phim
 * sau khi sort thì các bộ phim có thời gian kết thúc nhỏ nhất và có thời gian xem là nhỏ
 * nhất sẽ đứng trước.
 * nếu nhỏ hơn hoặc bằng thời gian bắt đầu của bộ phim đang xét thì tăng biến đếm,
 * cập nhật lại thời gian kết thúc.
 */
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> movies;

    for (size_t i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        movies.push_back({end, start});
    }
    sort(movies.begin(), movies.end());

    int ans = 0, end = 0;
    for (size_t i = 0; i < n; i++) {
        if (end <= movies[i].second) {
            end = movies[i].first;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
