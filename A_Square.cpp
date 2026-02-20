#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    // ৪টি বিন্দুর জন্য x এবং y স্থানাঙ্ক সংরক্ষণের অ্যারে
    int x[4], y[4];
    
    for (int i = 0; i < 4; i++) {
        cin >> x[i] >> y[i];
    }

    int side = 0;
    // প্রথম বিন্দুর সাথে বাকি ৩টি বিন্দুর তুলনা করি
    for (int i = 1; i < 4; i++) {
        // যদি x স্থানাঙ্ক একই হয়, তবে y-এর পার্থক্যই হলো বাহুর দৈর্ঘ্য
        if (x[0] == x[i]) {
            side = abs(y[0] - y[i]);
            break;
        }
        // অথবা যদি y স্থানাঙ্ক একই হয়, তবে x-এর পার্থক্যই হলো বাহুর দৈর্ঘ্য
        else if (y[0] == y[i]) {
            side = abs(x[0] - x[i]);
            break;
        }
    }

    // ক্ষেত্রফল = বাহু * বাহু
    cout << side * side << endl;
}

int main() {
    // ইনপুট এবং আউটপুট দ্রুত করার জন্য
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}