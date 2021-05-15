#include <bits/stdc++.h>
using namespace std;

vector<int64_t> sumQueries(const vector<int32_t> &a, const vector<pair<int32_t, int32_t>> &queries) {
    // int left, right;
    // tie(left, right) = queries[0];
    int n = a.size() + 1;
    vector<int64_t> preSum(n, 0), result;
    for (size_t i = 1; i < n; i++)
        preSum[i] = a[i] + preSum[i - 1];

    for (auto item : queries) {
        int l, r;
        tie(l, r) = item;
        result.push_back(preSum[r] - preSum[l - 1]);
    }
    return result;
}

vector<int64_t> mulQueries(const vector<int32_t> &a, const vector<pair<int32_t, int32_t>> &queries) {
    vector<int64_t> preSum, result;
    // int left, right;
    // tie(left, right) = queries[0]
    return result;
}

int main(int argc, char *argv[]) {
    clock_t start = clock();
    int numTestCase;
    cin >> numTestCase;
    ofstream out(argv[1]);
    bool isSum = strcmp(argv[2], "sum") == 0;
    for (int testcase = 1; testcase <= numTestCase; testcase++) {
        int n, q;
        cin >> n >> q;
        vector<int32_t> input(n);
        for (int i = 0; i < n; i++) cin >> input[i];
        vector<pair<int32_t, int32_t>> queries(q);
        for (auto &e : queries) cin >> e.first >> e.second;

        out << "Testcase #" << testcase << endl;
        vector<int64_t> result;
        if (isSum)
            result = sumQueries(input, queries);
        else
            result = mulQueries(input, queries);
        for (int64_t item : result)
            out << item << endl;
    }
    out.close();
    cout << "Total runtime: " << ((clock() - start) / 1000) << " miliseconds" << endl;
    return 0;
}
