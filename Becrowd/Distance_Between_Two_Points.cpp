#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x,y,x1,y1;
    cin>>x>>y>>x1>>y1;
    double ans = sqrt(pow(x1-x,2)+pow(y1-y,2));
    cout<<fixed<<setprecision(4)<<ans<<'\n';
    return 0;
}
