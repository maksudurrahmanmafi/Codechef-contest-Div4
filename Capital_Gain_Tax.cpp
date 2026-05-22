#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin>>x>>y;
    if(x>y)cout<<"DECREASED";
    else if(y>x)cout<<"INCREASED";
    else cout<<"SAME";
    return 0;
}
