#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n;
    cin>>n;
    double pi = 3.14159;
    double ans = (4/3.0) * pi * (n*n*n);
    cout<<fixed<<setprecision(3)<<"VOLUME = "<<ans<<'\n';
    return 0;
}
