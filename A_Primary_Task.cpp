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
     if (n>=102 && n<= 109 || n>=1010  &&n <= 1099)
        cout<<"YES"<<'\n';
    else
        cout<<"NO"<<'\n';
    }
    return 0;
}
