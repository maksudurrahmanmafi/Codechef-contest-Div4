#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    // যদি পরিমাপ সংখ্যা ২ হয়, তবে সেটি অবশ্যই একটি প্যাটার্ন (হয় Peak নাহলে Valley)
    // তবে শর্ত থাকতে হবে যে দুটি মান সমান না হয়।
    if (N == 2) {
        if (H[0] != H[1]) cout << 1 << endl;
        else cout << 0 << endl;
        return 0;
    }

    bool isValid = true;

    // লজিক: প্রতিটি মাঝখানের বিন্দু (H[i]) হয় তার দুই পাশের চেয়ে বড় (Peak) 
    // অথবা তার দুই পাশের চেয়ে ছোট (Valley) হতে হবে।
    for (int i = 1; i < N - 1; i++) {
        bool isPeak = (H[i] > H[i - 1] && H[i] > H[i + 1]);
        bool isValley = (H[i] < H[i - 1] && H[i] < H[i + 1]);

        if (!isPeak && !isValley) {
            isValid = false;
            break;
        }
    }

    // আউটপুট প্রিন্ট করা
    if (isValid) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}