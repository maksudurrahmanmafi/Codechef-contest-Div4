#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n; // Number as string

    bool unlucky = false;
    for (int i = 0; i + 1 < n.size(); i++)
        if (n[i] == '1' && n[i + 1] == '3') {
            unlucky = true;
            break;
        }

    // Ternary operator for output
    cout << n << (unlucky ? " es de Mala Suerte" : " NO es de Mala Suerte") << endl;

    return 0;
}
