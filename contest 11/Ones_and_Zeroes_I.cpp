#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     ll one =0,ans =0;

     for(auto c:s){
        if(c=='1')one++;
        else one--;
        if(one>=0) ans++;
     }
     cout<<ans<<'\n';
    }
    return 0;
}
