#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x,y;
    cin>>x>>y;
    if(x==1)cout<<fixed<<setprecision(2)<<"Total: R$ "<<4.00*y<<'\n';
    else if(x==2)cout<<fixed<<setprecision(2)<<"Total: R$ "<<4.50*y<<'\n';
    else if(x==3) cout<<fixed<<setprecision(2)<<"Total: R$ "<<5.00*y<<'\n';
    else if(x==4)cout<<fixed<<setprecision(2)<<"Total: R$ "<<2.00*y<<'\n';
    else cout<<fixed<<setprecision(2)<<"Total: R$ "<<1.50*y<<'\n';

    return 0;
}
