// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         vector<long long> A(N), C(N);
//         for (int i = 0; i < N; i++) cin >> A[i];
//         for (int i = 0; i < N; i++) cin >> C[i];

//         sort(A.begin(), A.end()); // descending
//         sort(C.rbegin(), C.rend());   // ascending

//         long long totalCost = 0;
//         for (int i = 0; i < N; i++) totalCost += A[i] * C[i];

//         cout << totalCost << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
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
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<ll> pre(n + 1);
        pre[0] = b[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = min(pre[i - 1], b[i]);
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += a[i] * pre[i];
        }
        cout << ans << '\n';
    }
    return 0;
}
