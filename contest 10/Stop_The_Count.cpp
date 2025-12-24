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
     int chef =0,antichef =0,count =0;
     for(int i =0;i<n;i++){
        if(s[i]=='1')chef++;
        else antichef++;
        if(chef>antichef)count++;
     }
     cout<<count<<'\n';
    }
    return 0;
}
