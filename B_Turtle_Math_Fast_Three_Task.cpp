#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    long long current_sum = 0;
    bool has_rem_1 = false;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        current_sum += a[i];
        if (a[i] % 3 == 1) {
            has_rem_1 = true;
        }
    }
    
    int remainder = current_sum % 3;
    
    if (remainder == 0) {
        cout << 0 << endl;
    } else if (remainder == 2) {
        cout << 1 << endl;
    } else { // remainder == 1
        // যদি এমন কোনো সংখ্যা থাকে যাকে সরালে যোগফল ৩ দ্বারা বিভাজ্য হয়
        if (has_rem_1) {
            cout << 1 << endl;
        } else {
            // অন্যথায় ২ মুভ লাগবে (একটি সংখ্যায় ২ যোগ করা)
            cout << 2 << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}