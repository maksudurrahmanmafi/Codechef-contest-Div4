#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     ll x,y;
     cin>>x>>y;
     if(x%2==0)cout<<"Bob"<<'\n';
     else cout<<"Alice\n";
    }
    return 0;
}
