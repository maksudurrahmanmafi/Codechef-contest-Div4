#include <iostream>
#include <string>

using namespace std;

// জেতার লজিক চেক করার জন্য একটি ফাংশন
bool isWinner(string current, string opponent1, string opponent2) {
    // শর্ত ১: বাকি দুইজন একই চাল দিতে হবে
    // শর্ত ২: কারেন্ট প্লেয়ারের চালটি অপোনেন্টের চালকে হারাতে হবে
    if (opponent1 == opponent2) {
        if (current == "pedra" && opponent1 == "tesoura") return true;
        if (current == "papel" && opponent1 == "pedra") return true;
        if (current == "tesoura" && opponent1 == "papel") return true;
    }
    return false;
}

int main() {
    // দ্রুত ইনপুট-আউটপুটের জন্য
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string dodo, leo, pepper;

    // EOF (End of File) পর্যন্ত ইনপুট পড়ার জন্য
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
            // যদি কেউ এককভাবে না জিতে, তবে টাই
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        }
    }

    return 0;
}