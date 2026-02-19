#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long A, B, C;
    cin >> A >> B >> C;

    long long sides[3] = {A, B, C};
    sort(sides, sides + 3);

    // Check validity
    if (sides[0] + sides[1] <= sides[2]) {
        cout << "Invalido" << endl;
        return 0;
    }

    // Type of triangle
    if (A == B && B == C) {
        cout << "Valido-Equilatero" << endl;
    }
    else if (A == B || B == C || A == C) {
        cout << "Valido-Isoceles" << endl;
    }
    else {
        cout << "Valido-Escaleno" << endl;
    }

    // Check right angle
    if (sides[0]*sides[0] + sides[1]*sides[1] == sides[2]*sides[2]) {
        cout << "Retangulo: S" << endl;
    } else {
        cout << "Retangulo: N" << endl;
    }

    return 0;
}
