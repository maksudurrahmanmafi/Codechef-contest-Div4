#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        set<char> st(s.begin(), s.end());
        if (st.size() == 1) {
            cout << "NO\n";
            continue;
        }

        string r = s;
        sort(r.begin(), r.end());

        if (r == s) {
            reverse(r.begin(), r.end());
        }

        cout << "YES\n";
        cout << r << "\n";
    }
    return 0;
}
