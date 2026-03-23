#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        int total_moves = 0;
        char current = 'a';

        for (char target : s) {
            int diff = abs(target - current);
            total_moves += min(diff, 26 - diff);
            current = target; // পয়েন্টার এখন নতুন অক্ষরের দিকে
        }

        cout << total_moves << "\n";
    }

    return 0;
}