#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin>>x;
    if(x==1){
        cout<<0<<endl;
    }
    else if((x+1) %3==0) cout<< x+1<<endl;
    else if((x-1)%3==0)cout<<x-1<<endl;
    else cout<<x<<endl;
    return 0;
}
