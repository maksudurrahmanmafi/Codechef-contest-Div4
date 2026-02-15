#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long c2 = n * (n - 1) / 2;

    long long c4 = 0;
    if (n >= 4) {
        c4 = n * (n - 1) * (n - 2) * (n - 3) / 24;
    }

    long long regions = 1 + c2 + c4;

    cout << regions << endl;

    return 0;
}
