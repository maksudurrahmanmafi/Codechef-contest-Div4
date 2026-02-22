#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    // সব character lowercase করলাম
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    set<char> letters;

    for(char c : s) {
        letters.insert(c);
    }

    if(letters.size() == 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
