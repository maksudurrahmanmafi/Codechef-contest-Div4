#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 99824435

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if (n == 1)
        {
            cout << (m + 1) % MOD<<'\n';
            continue;
        }
        if (m == 0)
        {
            cout << 1 << '\n';
            continue;
        }
        ll k = 0;
        while ((1LL << (k + 1)) <= m)
        {
            k++;
        }
        ll h_bit = (1LL << k);
        ll max_xor = (1 << (k + 1)) - 1;
        ll count = 0;
        count = (m - (1LL << k) + 1);
        ll ans = (count * 2) % MOD;
        cout << ans << '\n';
    }
    return 0;
}
