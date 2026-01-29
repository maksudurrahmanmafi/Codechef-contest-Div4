#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        unordered_map<int, long long> dp;
        long long ans = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            if (x == 1) {
                dp[1]++;
            } else if (dp.count(x - 1)) {
                dp[x] = max(dp[x], dp[x - 1] + 1);
            }

            ans = max(ans, dp[x]);
        }

        cout << ans << '\n';
    }
    return 0;
}
