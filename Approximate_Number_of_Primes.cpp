#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    double a = n/log(n);
    double b = 1.25506*n/log(n);
    cout<<fixed<<setprecision(1)<<a<<" "<<b<<'\n';
    return 0;
}
