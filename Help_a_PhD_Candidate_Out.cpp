#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        if(s == "P=NP") {
            cout << "skipped\n";
        }
        else {
            int pos = s.find('+');
            int a = stoi(s.substr(0, pos));
            int b = stoi(s.substr(pos + 1));

            cout << a + b << "\n";
        }
    }

    return 0;
}