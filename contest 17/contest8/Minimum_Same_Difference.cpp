#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 998244353;

// Function to calculate power with modulo
ll mod_pow(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    while(b) {
        if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) {
        int N, K;
        cin >> N >> K;

        ll ans = 0;

        // Distance d from 1 to N-1
        for(int d = 1; d < N; d++) {
            // Number of ways to choose repeated number at distance d
            ll ways = (ll)(N - d) * K % MOD;
            // Remaining positions can be filled freely with K numbers
            ll rest = mod_pow(K - 1, N - d - 1, MOD);
            ll contribution = ways * rest % MOD * d % MOD;
            ans = (ans + contribution) % MOD;
        }

        cout << ans << "\n";
    }

    return 0;
}
