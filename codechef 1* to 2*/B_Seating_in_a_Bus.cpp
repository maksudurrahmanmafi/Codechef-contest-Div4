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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = v[0], r = v[0];
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (v[i] + 1 == l)
                l = v[i];
            else if (v[i] - 1 == r)
                r = v[i];
            else
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}
