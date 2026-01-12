#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<(1.0/2.0)*(a*c)<<"\n";
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<3.14159*(c*c)<<"\n";
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<((a+b)*c)/2<<"\n";
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<(b*b)<<"\n";
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<(a*b)<<"\n";
    return 0;
}
