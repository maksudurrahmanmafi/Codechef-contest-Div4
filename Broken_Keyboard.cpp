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
                // Home key: কার্সারকে লিস্টের একদম শুরুতে নিয়ে যাও
                it = result.begin();
            } 
            else if (c == ']') {
                // End key: কার্সারকে লিস্টের একদম শেষে নিয়ে যাও
                it = result.end();
            } 
            else {
                // সাধারণ ক্যারেক্টার: বর্তমান কার্সার পজিশনে ইনসার্ট করো
                // insert() ফাংশন ডেটা ইনসার্ট করে এবং নতুন পজিশন রিটার্ন করে না, 
                // তাই আমরা কার্সারকে ইনসার্ট করা এলিমেন্টের ঠিক পরেই রাখি।
                result.insert(it, c);
            }
        }

        // পুরো লিস্টটি প্রিন্ট করা
        for (char c : result) {
            cout << c;
        }
        cout << "\n";
    }

    return 0;
}