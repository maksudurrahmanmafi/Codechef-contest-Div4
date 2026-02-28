#include<bits/stdc++.h>

using namespace std;

void solve() {
 
    int x[4], y[4];
    
    for (int i = 0; i < 4; i++) {
        cin >> x[i] >> y[i];
    }

    int side = 0;
   
    for (int i = 1; i < 4; i++) {
       
        if (x[0] == x[i]) {
            side = abs(y[0] - y[i]);
            break;
        }
       
        else if (y[0] == y[i]) {
            side = abs(x[0] - x[i]);
            break;
        }
    }

   
    cout << side * side << endl;
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}