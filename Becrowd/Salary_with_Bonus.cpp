#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string name ;
    cin>>name;
    double x,y;cin>>x>>y;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<x+(y*.15)<<'\n';
    return 0;
}
