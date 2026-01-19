#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    double e,f;
    cin>>a>>b>>e>>c>>d>>f;
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<(b*e)+(d*f)<<'\n';
    return 0;
}
