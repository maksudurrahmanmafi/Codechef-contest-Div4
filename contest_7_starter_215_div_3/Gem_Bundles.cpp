#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int r, g, b;
        cin >> r >> g >> b;
        int bundle = min({r, g, b});
        int ans = 10 * bundle;
        int ans2 = 3 * ((r - bundle) + (g - bundle) + (b - bundle));
        cout << ans + ans2 << '\n';
    }
    return 0;
}
