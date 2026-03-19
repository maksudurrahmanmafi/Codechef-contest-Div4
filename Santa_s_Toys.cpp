#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int male =0,female=0;
    while(t--){
     string a,b;
     cin>>a>>b;
    if(b=="F")female++;
    else male++;
    }
    cout<<male<<" carrinhos\n"<<female<<" bonecas\n";
    return 0;
}
