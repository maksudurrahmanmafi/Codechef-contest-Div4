
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
     ll bestD =-1,T=1;
     int idx =1;
     for(int i =1;i<=n;i++){
        int d,x;
        cin>>d>>x;
        if(bestD ==-1 || d*T>bestD*x){
            bestD =d;
            T=x;
            idx =i;
        }

     }
     cout<<idx<<'\n';
    }
    return 0;
}
