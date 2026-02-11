#include <bits/stdc++.h>
using namespace std;

int main() {
    double F1, F2;
    cin >> F1 >> F2;

    double totalFluctuation =
        ((1 + F1 / 100.0) * (1 + F2 / 100.0) - 1) * 100;

    cout << fixed << setprecision(6) << totalFluctuation << endl;
    return 0;
}