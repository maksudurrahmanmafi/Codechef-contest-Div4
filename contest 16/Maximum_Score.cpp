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
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll loss = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            ll ans = a[i]-b[i];
            if(ans<loss){
                loss = ans;
            }
        }
        cout<<sum-loss<<'\n';
    }
    return 0;
}
