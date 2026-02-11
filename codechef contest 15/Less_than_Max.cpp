#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        unordered_map<int, ll> mp;
        ll ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 1) {
                mp[1]++;
            } else if (mp.count(x - 1)) {
                mp[x] = max(mp[x], mp[x - 1] + 1);
            }

            ans = max(ans, mp[x]);
        }

        cout << ans << '\n';
    }
    return 0;
}
