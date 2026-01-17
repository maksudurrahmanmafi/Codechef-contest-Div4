#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,m;
     cin>>n>>m;
     if(n==m)cout<<"Yes\n";
     else if(n<m)cout<<"No\n";
     else{
        if(n%2!=0&&m%2==0 || n%2==0 &&m%2!=0)cout<<"No\n";
        else cout<<"Yes\n";
     }
    }
    return 0;
}
