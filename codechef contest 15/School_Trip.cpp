#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,x,k;
     cin>>n>>x>>k;
     ll low = (x/k)*k;
     ll up = low+k;
     ll ans =abs(x-low);
     if(up<=n){
        ans = min(ans,abs(up-x));
     }
     cout<<ans<<'\n';
    }
    return 0;
}
