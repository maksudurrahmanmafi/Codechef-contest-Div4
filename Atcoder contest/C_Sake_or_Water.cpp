#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    ll x;
    cin >> n >> k >> x;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + v[i];
    }

    for (int j = 1; j <= n; j++) {
        int s = max(0, j - (n - k));
        if (s == 0) continue;

        int st = n - j;
        ll sake = pref[st + s] - pref[st];

        if (sake >= x) {
            cout << j << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';
    return 0;
}
