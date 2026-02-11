#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    while (cin >> N) {           // read until EOF
        cin.ignore();            // clear newline
        for (int i = 1; i <= N; i++) {
            string s;
            getline(cin, s);
            cout << "resposta " << i << ": " << s << "\n";
        }
    }
    return 0;
}
