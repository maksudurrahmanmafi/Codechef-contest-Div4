#include <iostream>

using namespace std;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= 998244353;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % 998244353;
        base = (base * base) % 998244353;
        exp /= 2;
    }
    return res;
}

void solve() {
    long long N, M;
    cin >> N >> M;

    if (N == 1) {
        cout << (M + 1) % 998244353 << endl;
        return;
    }

    // Find the most significant bit of M
    if (M == 0) {
        cout << 1 << endl;
        return;
    }

    long long K = 0;
    while ((1LL << (K + 1)) <= M) {
        K++;
    }

    // The maximum possible XOR sum for any two elements is 2^(K+1) - 1
    // Let max_xor = (1LL << (K+1)) - 1
    // We need to find pairs (X, Y) such that X ^ Y == max_xor and 0 <= X, Y <= M
    
    long long high_bit = (1LL << K);
    // For X ^ Y to equal (2^(K+1) - 1), one must have the K-th bit as 1 
    // and the other must have it as 0.
    // Let X < 2^K and Y >= 2^K.
    // Y = (2^(K+1) - 1) ^ X.
    // We need Y <= M, so (2^(K+1) - 1) ^ X <= M.
    
    long long max_xor = (1LL << (K + 1)) - 1;
    long long count_pairs = 0;
    
    // We only need to check X in range [0, 2^K - 1]
    // Then Y = max_xor ^ X will be in range [2^K, 2^(K+1) - 1]
    // We need Y <= M.
    // max_xor ^ X <= M  =>  ( (2^K - 1) ^ X ) + 2^K <= M
    // (2^K - 1) ^ X <= M - 2^K
    
    // The number of X such that (2^K - 1) ^ X <= (M - 2^K)
    // is simply (M - 2^K) + 1 because XORing with (2^K - 1) 
    // is just a permutation of the numbers 0 to 2^K - 1.
    
    count_pairs = (M - (1LL << K) + 1);
    
    // Each pair (X, Y) can start as (A1, A2) or (Y, X) as (A1, A2).
    // So we multiply by 2.
    long long ans = (count_pairs * 2) % 998244353;
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}