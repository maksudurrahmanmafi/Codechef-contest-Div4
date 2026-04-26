#include <iostream>
#include <iomanip> // fixed এবং setprecision এর জন্য

using namespace std;

int main() {
    double a = 234.345;
    double b = 45.698;

    // ১. ছয় দশমিক স্থান পর্যন্ত
    cout << fixed << setprecision(6) << a << " - " << b << endl;

    // ২. কোনো দশমিক স্থান নেই (পূর্ণসংখ্যায় রাউন্ড হবে)
    cout << fixed << setprecision(0) << a << " - " << b << endl;

    // ৩. এক দশমিক স্থান পর্যন্ত
    cout << fixed << setprecision(1) << a << " - " << b << endl;

    // ৪. দুই দশমিক স্থান পর্যন্ত
    cout << fixed << setprecision(2) << a << " - " << b << endl;

    // ৫. তিন দশমিক স্থান পর্যন্ত
    cout << fixed << setprecision(3) << a << " - " << b << endl;

    // ৬. সায়েন্টিফিক নোটেশন (lowercase 'e')
    cout << scientific << setprecision(6) << a << " - " << b << endl;

    // ৭. সায়েন্টিফিক নোটেশন (uppercase 'E')
    // এখানে সায়েন্টিফিক মোড অন থাকায় uppercase ব্যবহার করলেই E বড় হাতের আসবে
    cout << uppercase << scientific << setprecision(6) << a << " - " << b << endl;

    // ৮. সংক্ষিপ্ততম প্রকাশ (shortest representation - lowercase)
    // 'defaultfloat' ব্যবহার করলে এটি স্বয়ংক্রিয়ভাবে ছোট ফরম্যাট বেছে নেয়
    cout << nouppercase << defaultfloat << a << " - " << b << endl;

    // ৯. সংক্ষিপ্ততম প্রকাশ (shortest representation - uppercase)
    cout << uppercase << defaultfloat << a << " - " << b << endl;

    return 0;
}