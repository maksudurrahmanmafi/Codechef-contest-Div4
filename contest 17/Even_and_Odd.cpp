#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<int>even,odd;
    
    while(t--){
        int x;
        cin>>x;
        if(x%2==0)even.push_back(x);
        else odd.push_back(x);
     
    }
    sort(even.begin(),even.end());
    sort(odd.rbegin(),odd.rend());
    for(auto x:even)cout<<x<<'\n';
    for(auto x:odd)cout<<x<<'\n';

    return 0;
}
