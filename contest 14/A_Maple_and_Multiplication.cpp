#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int a,b;
     cin>>a>>b;
     if(a==b){
        cout<<0<<'\n';
     }
     else{

          if(a%b==0||b%a==0)cout<<1<<'\n';
         else cout<<2<<'\n';
     }
    }
    return 0;
}
/* #include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a>>b;
        if(a==b){
            cout << 0 << endl;
        }
        else{
           if(a%b==0||b%a==0){
               cout << 1 << endl;
           }
           else{
               cout << 2 << endl;
           } 
        }
    }
} */