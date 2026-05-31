#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    cout << (X < 3 ? "GOLD" : (X < 6 ? "SILVER" : "BRONZE")) << endl;

    return 0;
}