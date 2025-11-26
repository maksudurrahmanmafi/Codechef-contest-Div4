#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        if(N <= 2) {
            cout << 0 << endl;
        } else {
            cout << ((N - 2) * (N - 2)) / 4 << endl;
        }
    }
    return 0;
}
