#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    while(cin>>s){
        int n;
        cin>>n;
        string ans ="";
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            ans+=s[x-1];
        }
        cout<<ans<<'\n';
    }
    return 0;
}
