#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;   // number of elements

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];   // input elements
    }

    int maxElement = v[0];

    for(int i = 1; i < n; i++) {
        if(v[i] > maxElement) {
            maxElement = v[i];
        }
    }

    cout << maxElement + 1 << endl;   // print max + 1

    return 0;
}