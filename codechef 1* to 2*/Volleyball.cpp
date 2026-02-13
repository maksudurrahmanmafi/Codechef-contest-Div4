#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string name;

    double totalService = 0, totalBlock = 0, totalAttack = 0;
    double totalServiceSuccess = 0, totalBlockSuccess = 0, totalAttackSuccess = 0;

    for(int i = 0; i < N; i++) {
        cin >> name;

        double S, B, A;
        double S1, B1, A1;

        cin >> S >> B >> A;
        cin >> S1 >> B1 >> A1;

        totalService += S;
        totalBlock += B;
        totalAttack += A;

        totalServiceSuccess += S1;
        totalBlockSuccess += B1;
        totalAttackSuccess += A1;
    }

    double servicePercent = (totalServiceSuccess / totalService) * 100.0;
    double blockPercent = (totalBlockSuccess / totalBlock) * 100.0;
    double attackPercent = (totalAttackSuccess / totalAttack) * 100.0;

    cout << fixed << setprecision(2);

    cout << "Pontos de Saque: " << servicePercent << " %.\n";
    cout << "Pontos de Bloqueio: " << blockPercent << " %.\n";
    cout << "Pontos de Ataque: " << attackPercent << " %.\n";

    return 0;
}
