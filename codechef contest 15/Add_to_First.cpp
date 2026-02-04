#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    bool possible = true;
    for (int i = 0; i < n; i++) {
        // ১. মান কমানো সম্ভব না
        if (a[i] > b[i]) {
            possible = false;
            break;
        }
        // ২. যদি মান বাড়াতে হয়, তবে শর্ত চেক করি
        if (a[i] < b[i]) {
            // যদি এটি শেষ এলিমেন্ট না হয় এবং ডানের এলিমেন্ট ছোট হয়
            if (i < n - 1 && b[i] > b[i + 1]) {
                possible = false;
                break;
            }
        }
    }

    if (possible) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}