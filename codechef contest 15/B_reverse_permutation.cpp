#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    ll num = n;
    for(ll i = 0; i < n; i++) {
        if(v[i] != num) {
            ll idx = -1;
            for(ll j = i + 1; j < n; j++) {
                if(v[j] == num) {
                    idx = j;
                    break;
                }
            }
            if(idx != -1) {
                reverse(v.begin() + i, v.begin() + idx + 1);
            }
            break;
        }
        num--;
    }
    for(ll i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t = 1;
    cin >> t;
    while (t--) solve();
}