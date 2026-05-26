#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int x,y,z;
     cin>>x>>y>>z;
     cout<<((y+(z*2)<=x?"YES\n":"NO\n"));
    }
    return 0;
}
