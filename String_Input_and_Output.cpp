#include <bits/stdc++.h>
using namespace std;

int main() {
    string A, B, C;

    getline(cin, A);
    getline(cin, B);
    getline(cin, C);

    cout << A << B << C << "\n";
    cout << B << C << A << "\n";
    cout << C << A << B << "\n";

    cout << A.substr(0,10)
         << B.substr(0,10)
         << C.substr(0,10) << "\n";

    return 0;
}