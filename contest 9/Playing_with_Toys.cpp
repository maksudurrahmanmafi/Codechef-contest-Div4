#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    if(m>n)cout<<0<<'\n';
    else cout<<n-m<<'\n';
    return 0;
}
