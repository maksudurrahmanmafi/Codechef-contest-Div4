#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a;
    cin>>a;
    double b;
    cin>>b;
    double c;
    cin>>c;
    double ans = (a*2+b*3+c*5)/10.0;
    cout<<fixed<<setprecision(1)<<"MEDIA = "<<ans<<'\n';
    return 0;
}
