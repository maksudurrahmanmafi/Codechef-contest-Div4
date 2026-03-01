#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     string s;
     cin>>s;
     double x = s.length();
     cout<<fixed<<setprecision(2)<<x/100<<'\n';
    }
    return 0;
}
