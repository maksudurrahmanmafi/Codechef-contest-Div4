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
     string s;
     cin>>n>>s;
     map<char,int>mp;
     for(auto c:s){
        mp[c]++;
     }
     bool flag = true;
     for(auto [first,second]:mp){
        if(second>2){
            flag = false;
            break;
        }
     }
     if(flag)cout<<"YES\n";
     else cout<<"NO\n";
    }
    return 0;
}
