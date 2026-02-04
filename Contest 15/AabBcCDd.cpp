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
     vector<int>v(26,0);
     for(auto c:s){
        if(islower(c))v[c-'a']++;
        else v[c-'A']++;
     }
     sort(v.rbegin(),v.rend());
     int ans = v[0];
     if(v.size()>1){
        ans +=v[1];
     }
     cout<<ans<<'\n';
    }
    return 0;
}
