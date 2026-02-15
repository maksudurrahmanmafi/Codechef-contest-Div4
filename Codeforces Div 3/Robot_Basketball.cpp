#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin>>x;
    if(x<=800)cout<<1<<'\n';
    else if(x<=1400)cout<<2<<'\n';
    else cout<<3<<'\n';
    return 0;
}
