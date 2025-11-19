#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        set<ll> st;
        int ops = 0;
        for (int i = 0; i < n; i++) {
            if (st.count(v[i])) {
                ops++;
                st.clear(); 
            }
            st.insert(v[i]);
        }

        cout << ops << '\n';
    }
    return 0;
}
