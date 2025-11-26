#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        ll L = max(x - y, x - z);
        ll R = min(x + y, x + z);
        if (L > R)
        {
            cout << 0 << '\n';
            continue;
        }
        ll ans = R - L + 1;
        if (L <= x && x <= R)
            ans--;
        if (ans < 0)
            cout << 0 << '\n';
        cout << ans << '\n';
    }
    return 0;
}
