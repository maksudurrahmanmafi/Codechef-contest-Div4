#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,s;
     cin>>n>>s;
     ll score =0;
     if(s<=5*n)score = n*6;
     else{
        ll mainus = s-(5*n);
        score = (n*6)-mainus;
     }
     cout<<score<<'\n';
    }
    return 0;
}
