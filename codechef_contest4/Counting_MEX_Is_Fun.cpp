#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& p) {
    set<int> mex_values;
    int n = p.size();
    for (int l = 0; l < n; l++) {
        vector<bool> seen(n+1, false);
        for (int r = l; r < n; r++) {
            seen[p[r]] = true;
            // find MEX
            int mex = 0;
            while (mex <= n && seen[mex]) mex++;
            mex_values.insert(mex);
        }
    }
    return mex_values.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, K;
        cin >> n >> K;
        vector<int> v(n);
        iota(v.begin(), v.end(), 0);

        long long ans = 0;
        do {
            if (solve(v) == K) ans++;
        } while (next_permutation(v.begin(), v.end()));

        cout << ans << "\n";
    }
}
