#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int sum = 0;
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            sum += x;
        }

        cout << sum - (k - 1) << endl;
    }

    return 0;
}