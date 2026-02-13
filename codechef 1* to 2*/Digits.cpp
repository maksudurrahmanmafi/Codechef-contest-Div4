#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,m;
     cin>>n>>m;
     if(n==0){
        cout<<1<<'\n';
        continue;
     }
     ll ans = floor(m*log10(n))+1;
     cout<<ans<<'\n';
    }
    return 0;
}
