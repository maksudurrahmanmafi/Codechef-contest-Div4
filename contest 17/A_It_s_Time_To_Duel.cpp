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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int one = count(v.begin(),v.end(),1);
        int zero = count(v.begin(),v.end(),0);
        if(one==n||zero==n||one==zero)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
