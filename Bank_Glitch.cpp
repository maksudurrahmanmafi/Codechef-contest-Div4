#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y;
        cin >> a >> b >> x >> y;
        ll trade = a / x;
        ll ans = (a + b) + (trade * (y - x));
        cout << ans << endl;
    }
    return 0;
}