#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int cnt =0;
    while(t--){
     int x;
     cin>>x;
     if(x!=1)cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}
