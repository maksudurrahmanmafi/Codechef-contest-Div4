#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    int ans = a*b*c;
    int ans2 =x*x*x;
    if(ans>ans2)cout<<"Cuboid\n";
    else if(ans2>ans)cout<<"Cube";
    else cout<<"Equal\n";
    return 0;
}
