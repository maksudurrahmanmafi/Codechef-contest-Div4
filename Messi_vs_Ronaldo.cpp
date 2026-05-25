#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a*2+b > c*2 +d)cout<<"Messi\n";
    else if(a*2+b<c*2+d)cout<<"Ronaldo\n";
    else cout<<"Equal\n";
    return 0;
}
