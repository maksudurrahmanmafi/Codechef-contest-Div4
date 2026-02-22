#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    
    long long phase1 = min(a, b);
    a -= phase1;
    b -= phase1;
    
    long long phase2 = (a + b) / 2; // remaining are all same color
    
    cout << phase1 << " " << phase2 << "\n";
    return 0;
}