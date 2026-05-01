#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double T;
    int N;

    cin >> T >> N;

    vector<int> W(N);
    for (int i = 0; i < N; i++) cin >> W[i];

    int maxW = *max_element(W.begin(), W.end());

    int answer = 500;

    // Try all possible max piece size
    for (int maxSize = 1; maxSize <= maxW; maxSize++) {

        int cuts = 0;
        int minPiece = INT_MAX;

        for (int i = 0; i < N; i++) {
            int pieces = (W[i] + maxSize - 1) / maxSize;
            cuts += pieces - 1;

            int smallestPiece = W[i] / pieces;
            minPiece = min(minPiece, smallestPiece);
        }

        if (cuts >= 500) continue;

        double ratio = (double)minPiece / maxSize;

        if (ratio > T) {
            answer = min(answer, cuts);
        }
    }

    cout << answer << '\n';

    return 0;
}