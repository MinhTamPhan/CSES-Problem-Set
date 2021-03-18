#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000005], b[200005], c[200005];
string tostring(ll x) {
    string s = "";
    while (x) {
        s += char('0' + x % 10);
        x /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main() {
    ll n, x;
    int i;
    cin >> n;
    a[0] = b[0] = 1;
    for (i = 1; i <= 17; i++) a[i] = a[i - 1] * 10;
    for (i = 1; i <= 17; i++) b[i] = a[i] - a[i - 1];
    i = 1;
    while (i <= 17) {
        if (n > i * b[i])
            n -= i * b[i];
        else {
            x = n / i;
            if (n % i) x++;
            x += a[i - 1] - 1;
            break;
        }
        i++;
    }
    n %= i;
    if (n == 0) n += i;
    string s = tostring(x);
    cout << s[n - 1];
    return 0;
}