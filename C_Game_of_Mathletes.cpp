#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int ans = 0;

        for (int x = 1; x <= n; x++) {
            int y = k - x;

            if (y < 1 || y > n) continue;

            if (x < y) {
                ans += min(freq[x], freq[y]);
            } 
            else if (x == y) {
                ans += freq[x] / 2;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}