#include<bits/stdc++.h>
using namespace std;
void search() {
	if (permutation.size() == n) {
		// process permutation
	} else {
		for (int i = 0; i < n; i++) {
			if (chosen[i]) continue;
			chosen[i] = true;
			permutation.push_back(i);
			search();
			chosen[i] = false;
			permutation.pop_back();
		}
	}
}
int main() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	vector<string> permu;
	do {
		permu.push_back(s);
	} while(next_permutation(s.begin(), s.end()));
	cout << permu.size() << endl;
	for(int i = 0; i < permu.size(); i++)
		cout << permu[i] << endl;
	return 0;
}
