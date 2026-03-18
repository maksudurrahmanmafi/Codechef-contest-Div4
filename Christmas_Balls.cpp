#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin>>x>>y;
    int ans = y/2;
    if(ans>x){
        cout<<"Faltam "<<ans-x<<" bolinha(s)\n";
    }
    else {
        cout<<"Amelia tem todas bolinhas!\n";
    }
    return 0;
}
