#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int x,y;
     cin>>x>>y;
     if(y%2==0){
        cout<<y/2*x<<endl;

     }
     else cout<<(y-1)/2*x<<endl;
    }
    return 0;
}
