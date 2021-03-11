#include<bits/stdc++.h>
using namespace std;

long long pow(int a, int p, long long mod) {
	if (p == 0) return 1;
	long long res = pow(a, p/2, mod);
	if (p % 2) return res * res * a;
	else return res * res;
}

int main() {
	int n;
	long long mod = 10e7;
	cin >> n;
	long long res = 1, a = 2;
//	while(n > 0) {
//		if (n % 2) res = (res * a) % mod;
//		a = (a * a) % mod;
//		n /= 2;
//	}

	res = pow(a, n, mod);
	cout << res << endl;
	return 0;
}
