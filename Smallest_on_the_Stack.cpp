#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    stack<long long> st, mn;

    while (N--) {
        string op;
        cin >> op;

        if (op == "PUSH") {
            long long v;
            cin >> v;

            st.push(v);

            if (mn.empty())
                mn.push(v);
            else
                mn.push(min(v, mn.top()));
        }

        else if (op == "POP") {
            if (st.empty()) {
                cout << "EMPTY\n";
            } else {
                st.pop();
                mn.pop();
            }
        }

        else if (op == "MIN") {
            if (st.empty()) {
                cout << "EMPTY\n";
            } else {
                cout << mn.top() << '\n';
            }
        }
    }

    return 0;
}