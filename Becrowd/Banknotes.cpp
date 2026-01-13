#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<n<<'\n';
    int one = n/100;
    cout<<one<<" "<<"nota(s) de R$ 100,00\n";
    n%=100;
    int two = n/50;
    cout<<two <<" "<<"nota(s) de R$ 50,00\n";
    n%=50;
    int thre = n/20;
    cout<<thre<<" nota(s) de R$ 20,00\n";
    n%=20;
    int four = n/10;
    cout<<four<<" nota(s) de R$ 10,00\n";
    n%=10;
    int five = n/5;
    cout<<five<<" nota(s) de R$ 5,00\n";
    n%=5;
    int six = n/2;
    cout<<six<<" nota(s) de R$ 2,00\n";
    n%=2;
    cout<<n<<" nota(s) de R$ 1,00\n";

    return 0;
}
