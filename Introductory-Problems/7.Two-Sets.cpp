#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, sum;
    cin >> n;
    sum = n * (n + 1) / 2;
    if (sum % 2)
        cout << "NO\n";
    else {
        sum /= 2;
        cout << "YES\n";
        vector<long long> s1, s2;

        while (n > 0) {
            if (sum - n >= 0) {
                sum -= n;
                s1.push_back(n);
            } else {
                s2.push_back(n);
            }
            n--;
        }
        cout << s1.size() << endl;
        for (auto e : s1) cout << e << " ";
        cout << "\n"
             << s2.size() << endl;
        for (auto e : s2) cout << e << " ";
    }
    return 0;
}
