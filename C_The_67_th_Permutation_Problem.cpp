#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int l = 1;
        int r = 3 * n;

        vector<int> v;

        for (int i = 0; i < n; i++) {
            v.push_back(l);
            v.push_back(r);
            v.push_back(r - 1);

            l++;
            r -= 2;
        }

        for (int x : v) cout << x << " ";
        cout << "\n";
    }

    return 0;
}