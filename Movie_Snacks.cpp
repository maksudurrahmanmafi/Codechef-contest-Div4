#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z;
    cin>>x>>y>>z;
    int ans =min((x*2)+(y*3),(z*2)+y);
    cout<<ans<<endl;
    return 0;
}
