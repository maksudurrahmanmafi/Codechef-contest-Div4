#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    int max_layers = 0;
    
    // আমরা ১ থেকে শুরু করে লেয়ার চেক করব
    for (int n = 1; n <= 30; n++) {
        long long white_needed1 = 0, dark_needed1 = 0;
        long long white_needed2 = 0, dark_needed2 = 0;

        for (int i = 0; i < n; i++) {
            long long current_layer_size = (1LL << i); // 2^i
            
            // প্যাটার্ন ১: বিজোড় লেয়ারগুলো White, জোড়গুলো Dark
            if (i % 2 == 0) {
                white_needed1 += current_layer_size;
                dark_needed2 += current_layer_size; // প্যাটার্ন ২ তে উল্টো
            } else {
                dark_needed1 += current_layer_size;
                white_needed2 += current_layer_size;
            }
        }

        // যদি যেকোনো একটি প্যাটার্ন আমাদের বাজেটের মধ্যে থাকে
        if ((white_needed1 <= a && dark_needed1 <= b) || 
            (white_needed2 <= a && dark_needed2 <= b)) {
            max_layers = n;
        } else {
            // যদি এই লেয়ার আর সম্ভব না হয়, তবে লুপ ব্রেক করি
            break;
        }
    }
    cout << max_layers << endl;
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