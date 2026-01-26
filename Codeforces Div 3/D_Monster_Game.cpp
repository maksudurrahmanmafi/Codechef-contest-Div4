#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        
        sort(a.rbegin(), a.rend()); // descending order
        sort(b.begin(), b.end());   // ascending order of strikes
        vector<ll> prefix(n+1, 0);
        for(int i = 0; i < n; i++)
            prefix[i+1] = prefix[i] + b[i];
        
        ll ans = 0;
        for(int k = 1; k <= n; k++){
            if(prefix[k] <= n){
                ans = max(ans, k * a[k-1]);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
