#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int a,b,c,d,e,f,g;
     cin>>a>>b>>c>>d>>e>>f>>g;
     int mx =max({a,b,c,d,e,f,g});
     int sum = a+b+c+d+e+f+g;
     cout<<2*mx-sum<<endl;
    }
    return 0;
}
