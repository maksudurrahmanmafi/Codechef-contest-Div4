#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char O;
    double M[12][12], sum = 0.0;
    int count = 0;

    // অপারেশন টাইপ ইনপুট ('S' বা 'M')
    cin >> O;

    // ১৪৪টি ফ্লোটিং পয়েন্ট নম্বর ইনপুট নেওয়া
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];

            // প্রধান কর্ণের উপরের এলিমেন্ট চেক করার শর্ত
            if (j > i) {
                sum += M[i][j];
                count++;
            }
        }
    }

    // আউটপুট ১ দশমিক ঘর পর্যন্ত সেট করা
    cout << fixed << setprecision(1);

    if (O == 'S') {
        cout << sum << endl;
    } else if (O == 'M') {
        // গড় বের করার জন্য মোট সংখ্যা (৬৬) দিয়ে ভাগ
        cout << sum / count << endl;
    }

    return 0;
}