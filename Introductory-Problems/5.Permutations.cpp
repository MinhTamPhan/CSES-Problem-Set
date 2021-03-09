#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n == 1)
    cout << 1;
  else if (n < 4)
    cout << "NO SOLUTION";
  else {
    int a[n];
    a[n / 2] = n;
    a[0] = n - 1;
    for (size_t i = 1; i < n / 2; i++) {
      a[i] = a[i - 1] - 2;
      a[i + n / 2] = a[i + n / 2 - 1] - 2;
    }
    a[n - 1] = a[n - 2] - 2;
    for (size_t i = 0; i < n; i++)
      cout << a[i] << " ";
  }
  return 0;
}