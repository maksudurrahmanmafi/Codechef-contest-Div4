#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    // sort in decreasing order
    double v[3] = {A, B, C};
    sort(v, v+3, greater<double>());

    A = v[0];
    B = v[1];
    C = v[2];

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO\n";
    } 
    else {
        if (A*A == B*B + C*C)
            cout << "TRIANGULO RETANGULO\n";

        if (A*A > B*B + C*C)
            cout << "TRIANGULO OBTUSANGULO\n";

        if (A*A < B*B + C*C)
            cout << "TRIANGULO ACUTANGULO\n";

        if (A == B && B == C)
            cout << "TRIANGULO EQUILATERO\n";

        else if (A == B || B == C || A == C)
            cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}