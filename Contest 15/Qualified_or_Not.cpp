#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b;
    cin>>n>>a>>b;
    if(n>=(a*2)&&n>=(b*2))cout<<"Yes";
    else cout<<"No";
    return 0;
}
