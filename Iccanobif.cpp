#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    // ফিবোনাচ্চি সংখ্যাগুলো রাখার জন্য ভেক্টর
    vector<long long> fib(n);
    fib[0] = 1;
    fib[1] = 1;

    // সাধারণ ফিবোনাচ্চি সিরিজ তৈরি করা
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // যেহেতু Iccanobif উল্টো সিরিজ, তাই রিভার্স করে প্রিন্ট করা
    for (int i = n - 1; i >= 0; i--) {
        cout << fib[i] << (i == 0 ? "" : " ");
    }
    cout << endl;

    return 0;
}