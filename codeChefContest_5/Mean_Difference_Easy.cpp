#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<ll> A(N);
        ll mn = LLONG_MAX, mx = LLONG_MIN;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            mn = min(mn, A[i]);
            mx = max(mx, A[i]);
        }
        cout << (mx - mn) << "\n";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// long long max_f_subsequence(const vector<long long>& arr) {
//     long long mn = *min_element(arr.begin(), arr.end());
//     long long mx = *max_element(arr.begin(), arr.end());
//     long long avg = (mn + mx) / 2; // floor automatically
//     return max(abs(mx - avg), abs(mn - avg));
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<long long> arr(n);
//         for (int i = 0; i < n; ++i) cin >> arr[i];

//         cout << max_f_subsequence(arr) << "\n";
//     }
//     return 0;
// }

