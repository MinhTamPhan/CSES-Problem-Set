#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> permu;
    do {
        permu.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << permu.size() << endl;
    for (int i = 0; i < permu.size(); i++)
        cout << permu[i] << endl;
    return 0;
}

vector<int> permutation;
vector<bool> chosen;
int n;
void search(set<string>& permu, const string& s) {
    if (permutation.size() == n) {
        string val = "";
        for (int e : permutation) val.push_back(s[permutation[e]]);
        permu.insert(val);
    } else {
        for (int i = 0; i < n; i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search(permu, s);
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}
int main2() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    set<string> permu;
    n = s.size();
    chosen.resize(n, false);
    search(permu, s);
    cout << permu.size() << endl;
    for (auto e : permu)
        cout << e << endl;
    return 0;
}