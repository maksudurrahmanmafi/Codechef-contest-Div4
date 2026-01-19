#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if((b-a)>=(e*c)&&(b-a)<=(e*d))cout<<1<<'\n';
        else cout<<0<<'\n';
    }
}
