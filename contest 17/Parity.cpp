#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int one = count(s.begin(),s.end(),'1');
    if(one%2==0)cout<<s<<'0'<<'\n';
    else cout<<s<<'1'<<'\n';
    return 0;
}
