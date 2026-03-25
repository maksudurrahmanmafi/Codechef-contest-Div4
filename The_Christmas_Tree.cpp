#include <iostream>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    while (n--) {
        int h, d, g;
        cin >> h >> d >> g;

        // তিনটি শর্তই একসাথে চেক করা হচ্ছে
        if (h >= 200 && h <= 300 && d >= 50 && g >= 150) {
            cout << "Sim" << endl;
        } else {
            cout << "Nao" << endl;
        }
    }
    return 0;
}