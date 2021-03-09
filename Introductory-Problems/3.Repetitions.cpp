#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 1, maxrep = 1;
    for (size_t i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
            maxrep = max(maxrep, count);
        } else
            count = 1;
    }
    cout << maxrep << endl;
    return 0;
}