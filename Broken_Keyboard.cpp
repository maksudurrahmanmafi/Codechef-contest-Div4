#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    // Fast I/O এর জন্য
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string line;
    // EOF (End of File) পর্যন্ত ইনপুট নেওয়া
    while (cin >> line) {
        list<char> result;
        // কার্সার শুরুতে সেট করা
        auto it = result.begin();

        for (char c : line) {
            if (c == '[') {
                
                it = result.begin();
            } 
            else if (c == ']') {
               
                it = result.end();
            } 
            else {
               
                result.insert(it, c);
            }
        }

        
        for (char c : result) {
            cout << c;
        }
        cout << "\n";
    }

    return 0;
}