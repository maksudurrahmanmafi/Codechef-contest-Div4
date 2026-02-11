/* #include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll>dp(n+1,0);
        for(int i = 1;i<=n;i++){
            dp[i]=dp[i-1];
            for(int j = 1;j<i;j++){
                if(abs(v[i-1]-v[j-1])>k){
                    dp[i]=max(dp[i],1+dp[j-1]);
                }
            }
        }
        cout<<dp[n]<<'\n';
    }
    return 0;
}
 */

