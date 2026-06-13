#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int x,y;
     string a,b;
     cin>>x>>y>>a>>b;
     int mn = (a.length(),b.length());
       for (int i = 0; i < mn; i++)

       {
        if(a[i]==b[i])cout<<a[i];
        else break;
          
       }
       cout<<endl;
    }
    return 0;
}
