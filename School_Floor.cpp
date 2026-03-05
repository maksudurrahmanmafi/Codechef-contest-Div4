#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int L, C;
    if (cin >> L >> C) {
        int type1 = (L * C) + ((L - 1) * (C - 1));
        int type2 = 2 * (L - 1) + 2 * (C - 1);
        cout << type1 << "\n";
        cout << type2 << "\n";
    }

    return 0;
}