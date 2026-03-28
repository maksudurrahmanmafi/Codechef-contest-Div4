#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll x, y, a;
    cin >> x >> y >> a;
    ll full_cycles = a / (x + y);
    ll remaining_depth = a % (x + y);
    if (remaining_depth < x) {
        cout << "NO" << "\n";
    } else {
       
        cout << "YES" << "\n";
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