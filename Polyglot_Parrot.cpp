#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    while (true) {
        if (!getline(cin, input)) break; // ইনপুট শেষ হলে লুপ থেকে বের হয়ে যাবে
        
        if (input == "esquerda") cout << "ingles" << endl;
        else if (input == "direita") cout << "frances" << endl;
        else if (input == "nenhuma") cout << "portugues" << endl;
        else if (input == "as duas") cout << "caiu" << endl;
    }
    return 0;
}