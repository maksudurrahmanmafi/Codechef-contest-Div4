#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int w,p,k;
        cin>>w>>p>>k;
        int x =min(w,k);
        int style = 2*x+(k-x);
        cout<<style<<'\n';
    }
    return 0;
}
