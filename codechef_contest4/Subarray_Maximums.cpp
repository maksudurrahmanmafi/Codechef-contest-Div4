#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while(T--) {
        int N;
        string S;
        cin >> N >> S;

        // Step 1: Impossible check
        if(S[N-1] == '0') {
            cout << -1 << "\n";
            continue;
        }

        vector<int> P(N);
        int left = 0, right = N-1;

        // Step 2: Place numbers from largest to smallest
        for(int i = N; i >= 1; i--) {
            if(S[i-1] == '1') {
                P[left++] = i;   // leftmost empty spot
            } else {
                P[right--] = i;  // rightmost empty spot
            }
        }

        // Step 3: Output permutation
        for(int i = 0; i < N; i++) {
            cout << P[i] << (i == N-1 ? "\n" : " ");
        }
    }

    return 0;
}
