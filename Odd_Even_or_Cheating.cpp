#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;

    if (r) cout << (a ? "Jogador 2 ganha!\n" : "Jogador 1 ganha!\n");
    else if (a) cout << "Jogador 1 ganha!\n";
    else {
        int sum = (j1 + j2) % 2;
        if ((sum == 0 && p == 1) || (sum == 1 && p == 0))
            cout << "Jogador 1 ganha!\n";
        else
            cout << "Jogador 2 ganha!\n";
    }
}

/* #include <bits/stdc++.h>
using namespace std;

int main() {
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;

    // cheat case
    if (r == 1) {
        if (a == 1) cout << "Jogador 2 ganha!\n";
        else cout << "Jogador 1 ganha!\n";
    }
    else { // no cheat
        if (a == 1) {
            cout << "Jogador 1 ganha!\n";
        }
        else {
            int sum = j1 + j2;

            if (sum % 2 == 0) { // even
                if (p == 1) cout << "Jogador 1 ganha!\n";
                else cout << "Jogador 2 ganha!\n";
            } else { // odd
                if (p == 0) cout << "Jogador 1 ganha!\n";
                else cout << "Jogador 2 ganha!\n";
            }
        }
    }

    return 0;
} */