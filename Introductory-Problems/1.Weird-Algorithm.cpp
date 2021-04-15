/*
 * Author: Phan Minh Tâm (phanminhtam247@gmail.com)
 * Created on: 03-04-2021
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << n << " ";
    while (n != 1) {
        if (n % 2 == 1)
            n = n * 3 + 1;
        else
            n /= 2;
        cout << n << " ";
    }
    return 0;
}
