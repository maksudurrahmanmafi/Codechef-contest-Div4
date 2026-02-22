#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n,w;
    cin>>k>>n>>w;
    int ans = k*(w*(w+1))/2;
    if(ans-n<=0)cout<<0<<'\n';
    else cout<<ans-n<<'\n';
    return 0;
}
