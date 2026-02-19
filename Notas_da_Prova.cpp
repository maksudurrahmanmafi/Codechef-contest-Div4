#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin>>x;
    if(x==0)cout<<"E\n";
    else if(x>=1 && x<=35)cout<<"D\n";
    else if(x>=36&&x<=60)cout<<"C\n";
    else if(x>=61&&x<=85)cout<<"B\n";
    else cout<<"A\n";
    return 0;
}
