#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     ll b,g,x,y,n;
     cin>>b>>g>>x>>y>>n;
     if(x+y>n || b<x||g<y){
        cout<<-1<<'\n';
        continue;
     }
     ll total = b+g;
     ll room = (total+n-1)/n;
     ll mx = min(b/x,g/y);
     if(room>mx)cout<<-1<<'\n';
     else cout<<room<<'\n';
    }
    return 0;
}
