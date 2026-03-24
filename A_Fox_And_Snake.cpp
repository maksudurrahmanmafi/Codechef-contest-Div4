#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    // ইনপুট n (সারি) এবং m (কলাম)
    if (!(cin >> n >> m)) return 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            // বিজোড় সারি (১, ৩, ৫...): সবগুলোতে '#' হবে
            for (int j = 0; j < m; j++) cout << "#";
        } 
        else {
            // জোড় সারি (২, ৪, ৬...): সাপের মোড় ঘোরার লজিক
            if ((i / 2) % 2 != 0) {
                // ২, ৬, ১০... নম্বর সারির জন্য শেষে '#' হবে
                for (int j = 0; j < m - 1; j++) cout << ".";
                cout << "#";
            } 
            else {
                // ৪, ৮, ১২... নম্বর সারির জন্য শুরুতে '#' হবে
                cout << "#";
                for (int j = 0; j < m - 1; j++) cout << ".";
            }
        }
        // প্রতিটি সারি শেষে নিউ-লাইন
        cout << "\n";
    }

    return 0;
}