#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3, n;
    
    // ইনপুট গ্রহণ
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    int total_cups = a1 + a2 + a3;
    int total_medals = b1 + b2 + b3;

    // কাপের জন্য শেলফ সংখ্যা (Ceiling division)
    int shelves_for_cups = (total_cups + 4) / 5;
    
    // মেডেলের জন্য শেলফ সংখ্যা (Ceiling division)
    int shelves_for_medals = (total_medals + 9) / 10;

    // মোট প্রয়োজনীয় শেলফ যদি n এর চেয়ে বেশি না হয়
    if (shelves_for_cups + shelves_for_medals <= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}