#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     string s,k="codeforces";
     cin>>s;
     int ans =0;
     for(int i =0;i<10;i++){
        if(s[i]!=k[i])ans++;
     }
     cout<<ans<<'\n';
    }
    return 0;
}
