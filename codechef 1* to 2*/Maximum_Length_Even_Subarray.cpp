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
     int sum = n*(n+1)/2;
     if(sum%2!=0)cout<<n-1<<'\n';
     else cout<<n<<'\n';
    }
    return 0;
}
