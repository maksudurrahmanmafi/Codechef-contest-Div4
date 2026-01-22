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
     map<int,int>mp;
     for(int i =0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
     }
     int best = -1,freq =0;
     for(auto it:mp){
        int color = it.first;
        int ans = it.second;
        if(ans>freq){
            freq =ans;
            best = color;
        }
     }
     cout<<best<<'\n';
    }
    return 0;
}
