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
     string s;
     cin>>n>>s;
     int one =0;
     vector<int>ans;
     for(int i =0;i<n;i++){
        if(s[i]=='1'){
            one++;
            ans.push_back(i);

        }
     }
     ll max_v = min((ll)n,2LL*one);
     ll swaps =0;
     int one_used =0,current =0;
     for(int i =1;i<=max_v;i++){
        int need =(i+1)/2;
        while(one_used<need){
            int ans2 =ans[current];
            if(ans2>(i-1)){
                swaps +=(ll)(ans2 - (i-1));
                ans [current] =i-1;
            }
            one_used++;
            current++;
        }
     }
     cout<<max_v<<" "<<swaps<<'\n';
     
    }
    
    return 0;
}
