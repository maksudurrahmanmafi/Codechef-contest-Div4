#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int plus = count(s.begin(),s.end(),'+');
     int minus = count(s.begin(),s.end(),'-');
     int ans = abs(plus-minus);
     cout<<ans<<'\n';
    }
    return 0;
}
