#include <iostream>
#include <string>

using namespace std;

int main() {
    char a, b, c;

    // EOF পর্যন্ত ইনপুট পড়ার জন্য লুপ ব্যবহার করা ভালো
    while (cin >> a >> b >> c) {
        // প্রথম লাইন: A = a, B = b, C = c
        cout << "A = " << a << ", B = " << b << ", C = " << c << endl;

        // দ্বিতীয় লাইন: A = b, B = c, C = a
        cout << "A = " << b << ", B = " << c << ", C = " << a << endl;

        // তৃতীয় লাইন: A = c, B = a, C = b
        cout << "A = " << c << ", B = " << a << ", C = " << b << endl;
    }

    return 0;
}