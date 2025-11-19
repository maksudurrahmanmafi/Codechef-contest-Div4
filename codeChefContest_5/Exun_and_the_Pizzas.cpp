#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,r;
    cin>>n>>k>>r;
    int sum = n -k;
    cout<<sum*r<<'\n';
    return 0;
}
