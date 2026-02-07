#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    // মোট ২n টি সারি
    for (int r = 0; r < 2 * n; r++) {
        // প্রতিটি সারিতে ২n টি কলাম
        for (int c = 0; c < 2 * n; c++) {
            // (r/2 + c/2) জোড় হলে '#' অন্যথায় '.'
            if ((r / 2 + c / 2) % 2 == 0) {
                cout << '#';
            } else {
                cout << '.';
            }
        }
        // প্রতিটি সারি শেষ হলে নতুন লাইন
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