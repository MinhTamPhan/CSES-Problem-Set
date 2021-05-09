#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, sum = 0, a;
  cin >> n;
  sum = n * (n + 1) / 2;
  for (int i = 0; i < n - 1; i++) {
    cin >> a;
    sum -= a;
  }
  cout << sum << endl;
  return 0;
}