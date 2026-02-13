#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin>>x;
    if(x%5!=0){
        cout<<(x/5)+1<<'\n';
    }
    else cout<<x/5<<'\n';
    return 0;
}
