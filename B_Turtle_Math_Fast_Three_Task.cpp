#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    long long current_sum = 0;
    bool has_rem_1 = false;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        current_sum += a[i];
        if (a[i] % 3 == 1) {
            has_rem_1 = true;
        }
    }
    
    int remainder = current_sum % 3;
    
    if (remainder == 0) {
        cout << 0 << endl;
    } else if (remainder == 2) {
        cout << 1 << endl;
    } else { 
       
        if (has_rem_1) {
            cout << 1 << endl;
        } else {
           
            cout << 2 << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}