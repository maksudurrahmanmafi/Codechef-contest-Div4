#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Count total ones
        int totalOnes = 0;
        for (char c : s) if (c == '1') totalOnes++;

        // If no 1 exists
        if (totalOnes == 0) {
            cout << "0 0\n";
            continue;
        }

        // Find first and last '1'
        int first = -1, last = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (first == -1) first = i;
                last = i;
            }
        }

        int maxOnes = last - first + 1;

        // Minimum calculation
        int minOnes = 0;
        for (int i = 0; i < n;) {
            if (s[i] == '1') {
                int j = i;
                while (j < n && s[j] == '1') j++;

                int len = j - i;
                minOnes += (len + 1) / 2; // ceil(len/2)

                i = j;
            } else {
                i++;
            }
        }

        cout << minOnes << " " << maxOnes << "\n";
    }

    return 0;
}