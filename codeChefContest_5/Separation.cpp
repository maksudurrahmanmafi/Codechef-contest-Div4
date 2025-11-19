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
        int n, x;
        cin >> n >> x;
        vector<ll> v(n);
        ll les = 0, eql = 0, grat = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > x)
                grat++;
            else if (v[i] < x)
                les++;
            else
                eql++;
        }
        if (eql > 0 || les == 0 || grat == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
