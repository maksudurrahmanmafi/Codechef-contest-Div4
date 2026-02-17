#include <iostream>
using namespace std;

int main() {
    int E, D;
    while (cin >> E >> D) {
        if (E > D) {
            cout << "Eu odeio a professora!" << endl;
        } else if (D - E >= 3) {
            cout << "Muito bem! Apresenta antes do Natal!" << endl;
        } else {
            cout << "Parece o trabalho do meu filho!" << endl;
            if (E + 2 <= 24) {
                cout << "TCC Apresentado!" << endl;
            } else {
                cout << "Fail! Entao eh nataaaaal!" << endl;
            }
        }
    }
    return 0;
}