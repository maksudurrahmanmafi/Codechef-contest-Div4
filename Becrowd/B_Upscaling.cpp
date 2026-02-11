#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int r = 0; r < 2 * n; r++) {
        for (int c = 0; c < 2 * n; c++) {         
            if ((r / 2 + c / 2) % 2 == 0) {
                cout << '#';
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}