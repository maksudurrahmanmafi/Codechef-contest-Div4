#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int a,b;
     cin>>a>>b;
     double small = 100.0/a;
     double large = 225.0/b;
     if(small>large)cout<<"Small\n";
     else if(large>small)cout<<"Large\n";
     else cout<<"Equal\n";
    }
    return 0;
}
