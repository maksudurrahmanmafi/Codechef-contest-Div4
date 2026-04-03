#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int x,y;
     cin>>x>>y;
     if(y>x)cout<<0<<endl;
     else cout<<x-y<<endl;
    }
    return 0;
}
