#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        sort(A.begin(), A.end());

        vector<long long> res(N, -1); // default -1

        for (int i = 1; i < N-1; i++) { 
            long long left = (A[i-1] + A[i] + 1) / 2; // ceil((A[i-1]+A[i])/2)
            long long right = (A[i] + A[i+1]) / 2;    // floor((A[i]+A[i+1])/2)
            long long count = right - left + 1;       // boundary included
            res[i] = count > 0 ? count : 0;
        }

        for (int i = 0; i < N; i++) {
            cout << res[i] << (i == N-1 ? "\n" : " ");
        }
    }

    return 0;
}
