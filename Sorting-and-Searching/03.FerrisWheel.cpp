#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/*
** cho 1 mảng n phần tử và 1 số taget
** Tìm min số cách chia mảng n phần tử ra thành các mảng
** con có 1 hoặc 2 phần tử sao cho tổng không vượt qua target
*/

int main() {
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (size_t i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);

    int i = 0, ans = n, j = n - 1;
    while (i < j) {
        if (arr[i] + arr[j] <= target)
            ans--, i++, j--;
        else
            j--;
    }
    cout << ans << endl;
}
