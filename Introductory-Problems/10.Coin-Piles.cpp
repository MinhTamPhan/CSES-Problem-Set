#include<bits/stdc++.h>
int main(){
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a , b;
		cin >> a >> b;
		if (b > a) swap(a, b);
		if (a > 2 * b) cout << "NO";
		else {
			a %= 3;
			b %= 3;
			if (a < b) swap(a, b);
			if (( a== 2 && b == 1) ||(a == 0 && b == 0)) cout << "YES";
			else cout << "NO";
		}
			cout << endl;
		}
	return 0;
}

