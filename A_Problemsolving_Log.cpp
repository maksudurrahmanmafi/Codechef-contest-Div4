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
        v[c-'A']++;
     }
     int ans  =0;
       for (int i = 0; i < 26; i++)
       {
             if(v[i]>=i+1)ans++;
       }
       cout<<ans<<'\n';
    }
    return 0;
}
