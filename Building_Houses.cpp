#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0)break;
       
        double house_area = a * b;
        double land_area = house_area / (c / 100.0); // divide by percentage
        int side = (int) sqrt(land_area);           // truncate

        cout << side << endl;
    }
    return 0;
}
