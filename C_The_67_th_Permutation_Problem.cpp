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

        int left = 1;
        int right = 3 * n;

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            ans.push_back(left);
            ans.push_back(right);
            ans.push_back(right - 1);

            left++;
            right -= 2;
        }

        for (int x : ans) cout << x << " ";
        cout << "\n";
    }

    return 0;
}