#include <iostream>
#include <string>

using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;

    // যদি B এর দৈর্ঘ্য A এর চেয়ে বড় হয়, তবে সেটি মেলা সম্ভব নয়
    if (b.size() > a.size()) {
        cout << "nao encaixa" << endl;
    } else {
        // A এর শেষ অংশটুকু কেটে নেওয়া (Suffix)
        string sub = a.substr(a.size() - b.size());
        
        if (sub == b) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}