#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long d = 0;
    for (int i = 0; i + 1 < n; i++) {
        d = __gcd(d, a[i + 1] - a[i]);
    }

    long long ans = 0;
    for (int i = 0; i + 1 < n; i++) {
        ans += (a[i + 1] - a[i]) / d - 1;
    }

    cout << ans << '\n';
    return 0;
}
