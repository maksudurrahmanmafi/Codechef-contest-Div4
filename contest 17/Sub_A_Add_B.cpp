#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,a,b;
     cin>>n>>a>>b;
     if(n<a)cout<<n<<'\n';
     else{
        ll dif = a-b;
        ll remain = (n-a)%dif;
        cout<<b+remain<<'\n';
     }
    }
    return 0;
}
