#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    // শেষ ৩টি অক্ষর চেক করা (ইনডেক্স ২, ৩ এবং ৪)
    if (s[2] == 'n' && s[3] == 't' && s[4] == 'a') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}