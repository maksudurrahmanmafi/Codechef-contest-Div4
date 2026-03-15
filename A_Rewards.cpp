#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3, n;
    

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    int total_cups = a1 + a2 + a3;
    int total_medals = b1 + b2 + b3;

 
    int shelves_for_cups = (total_cups + 4) / 5;
    
   
    int shelves_for_medals = (total_medals + 9) / 10;


    if (shelves_for_cups + shelves_for_medals <= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}