#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int M;

    while (cin >> M) {

        long double totalWeightedSum = 0.0;
        long double totalWorkload = 0.0;

        for (int i = 0; i < M; i++) {
            long double N, C;
            cin >> N >> C;

            totalWeightedSum += N * C;
            totalWorkload += C;
        }

        long double API = totalWeightedSum / (totalWorkload * 100.0);

        cout << fixed << setprecision(4) << API << '\n';
    }

    return 0;
}
