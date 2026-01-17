#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p,q,x,y;
    cin>>p>>q>>x>>y;
    if(x>=p &&x<=p+99 && q<=y&&y<=q+99)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
