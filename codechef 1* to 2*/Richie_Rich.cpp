#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x;
	    cin>>a>>b>>x;
	    int ans = b-a;
	    if(ans%x==0){
	        cout<<ans/x<<'\n';
	    }
	    else cout<<ans/x+1<<'\n';
	}

}
