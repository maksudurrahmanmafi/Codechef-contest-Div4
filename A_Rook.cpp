#include <iostream>
#include <string>

using namespace std;

int main() {
    // ইনপুট এবং আউটপুট দ্রুত করার জন্য
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        char col = s[0]; // বর্তমান কলাম (e.g., 'e')
        char row = s[1]; // বর্তমান রো (e.g., '5')

        // একই কলামের অন্যান্য রো প্রিন্ট করা
        for (char r = '1'; r <= '8'; r++) {
            if (r != row) {
                cout << col << r << "\n";
            }
        }

        // একই রো-এর অন্যান্য কলাম প্রিন্ট করা
        for (char c = 'a'; c <= 'h'; c++) {
            if (c != col) {
                cout << c << row << "\n";
            }
        }
    }

    return 0;
}