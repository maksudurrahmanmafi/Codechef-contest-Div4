#include <iostream>
using namespace std;

int main() {
    int P, R;
    cin >> P >> R;

    cout << (P==R ? (P==1 ? "A" : "C") : "B") << endl;

    return 0;
}