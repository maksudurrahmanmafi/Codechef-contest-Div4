#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a,b,c;
    cin>>a>>b>>c;
    if((a+b>c)&&(b+c>a)&&(c+a)>b)cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
    else cout<<fixed<<setprecision(1)<<"Area = "<<(a+b)*c/2.0<<endl;
    return 0;
}
