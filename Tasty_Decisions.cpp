#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int X, Y; cin >> X >> Y;
        cout << (2*X > 5*Y ? "Chocolate" : (2*X < 5*Y ? "Candy" : "Either")) << endl;
    }
}