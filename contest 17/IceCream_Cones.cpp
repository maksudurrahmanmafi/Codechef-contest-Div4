#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int x,y,n;
     cin>>x>>y>>n;
     if(y*n>=x)cout<<0<<'\n';
     else cout<<(x - (y*n))<<'\n';
    }
    return 0;
}
