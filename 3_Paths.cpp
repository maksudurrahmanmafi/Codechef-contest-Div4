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
     if(n<=2){
        cout<<-1<<'\n';
        continue;
     }
     vector<vector<int>>v(n,vector<int>(n,0));
     for(int j =0;j<n;j++){
        v[0][j] =1;
     }
     for(int i = 1;i<n;i++){
        v[i][n-2] =1;
        v[i][n-1]=1;
     }
     for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<'\n';
     }
    }
    return 0;
}

