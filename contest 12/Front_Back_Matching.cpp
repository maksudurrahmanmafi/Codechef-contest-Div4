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
     for(auto x:s){
        mp[x]++;
     }
     bool flag = false;
     for(auto [f,l]:mp){
        if(l>=2){
            flag = true;
            break;
        }

     }
     cout<<(flag?"Yes\n":"No\n");
    }
    return 0;
}
