#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    cin.ignore(); // ignore newline

    while (N--) {
        string s;
        getline(cin, s);

        // Step 1: shift letters +3
        for (char &c : s) {
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
                c = c + 3;
            }
        }

        // Step 2: reverse string
        reverse(s.begin(), s.end());

        // Step 3: second half -1
        int len = s.size();
        for (int i = len / 2; i < len; i++) {
            s[i] = s[i] - 1;
        }

        cout << s << "\n";
    }

    return 0;
}