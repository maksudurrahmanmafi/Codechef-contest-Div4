#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  
    long long int s,k,m;
    cin >> s >> k >> m;
    ll f = m/k;
    ll t = m%k; 
    ll ans = s-t; 
    if (s>k && f%2) {
       ans =  k-t;
    } 

    ll zero = 0;
    ans = max(zero, ans);

    cout << ans << endl;
}

int main(void)
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}