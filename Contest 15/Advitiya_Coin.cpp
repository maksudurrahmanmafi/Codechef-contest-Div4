/* #include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll>dp(n+1,0);
        for(int i = 1;i<=n;i++){
            dp[i]=dp[i-1];
            for(int j = 1;j<i;j++){
                if(abs(v[i-1]-v[j-1])>k){
                    dp[i]=max(dp[i],1+dp[j-1]);
                }
            }
        }
        cout<<dp[n]<<'\n';
    }
    return 0;
}
 */

 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        long long K;
        cin >> N >> K;

        vector<long long> P(N);
        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }

        int count = 0;
        long long start = P[0];

        for (int i = 1; i < N; i++) {
            if (llabs(P[i] - start) > K) {
                // Winning trade found
                count++;
                start = P[i]; // start new trade
            } else {
                // Update start to maximize chance of future winning trade
                if (P[i] > start) {
                    // upward trend → keep minimum
                    start = min(start, P[i]);
                } else {
                    // downward trend → keep maximum
                    start = max(start, P[i]);
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}
