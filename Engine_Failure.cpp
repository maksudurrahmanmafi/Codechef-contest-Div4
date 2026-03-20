#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            cout << i + 1 << '\n'; // 1-based index
            return 0;
        }
    }

    cout << 0 << '\n'; // no fall
    return 0;
}