#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 1 << n;
    for (int i = 0; i < total; i++) {
        unsigned graycode = i ^ (i >> 1);
        bitset<32> b(graycode);
        string s = b.to_string();
        cout << s.substr(32 - n) << endl;
    }
    return 0;
}
