#include<bits/stdc++.h>

using namespace std;

bool isWinner(string current, string opponent1, string opponent2) {
  
    if (opponent1 == opponent2) {
        if (current == "pedra" && opponent1 == "tesoura") return true;
        if (current == "papel" && opponent1 == "pedra") return true;
        if (current == "tesoura" && opponent1 == "papel") return true;
    }
    return false;
}

int main() {
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string dodo, leo, pepper;

    while (cin >> dodo >> leo >> pepper) {
        
        if (isWinner(dodo, leo, pepper)) {
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        } 
        else if (isWinner(leo, dodo, pepper)) {
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        } 
        else if (isWinner(pepper, dodo, leo)) {
            cout << "Urano perdeu algo muito precioso..." << endl;
        } 
        else {
           
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        }
    }

    return 0;
}