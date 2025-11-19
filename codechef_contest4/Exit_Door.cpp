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
        vector<ll> v(n);
        vector<ll> pos(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            pos[v[i]] = i;
        }
        vector<bool> left(n, true);
        ll ans = 0;
        for (int j = n; j >= 1; j--)
        {
            int i = pos[j];

            int l_count = 0, r_count = 0;
            for (int k = 0; k < i; k++)
                if (left[k])
                    l_count++;
            for (int k = i + 1; k < n; k++)
                if (left[k])
                    r_count++;
            ans+=min(l_count,r_count);  
            left[i]=false;      
        }
        cout<<ans<<'\n';
    }
    return 0;
}
