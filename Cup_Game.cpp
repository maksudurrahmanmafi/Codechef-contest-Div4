#include <iostream>

using namespace std;

int main() {
    int N;
    char currentPos;
    
    // Read number of moves and initial position
    if (!(cin >> N >> currentPos)) return 0;
    
    while (N--) {
        int move;
        cin >> move;
        
        if (move == 1) {
            // Swap A and B
            if (currentPos == 'A') currentPos = 'B';
            else if (currentPos == 'B') currentPos = 'A';
        } else if (move == 2) {
            // Swap B and C
            if (currentPos == 'B') currentPos = 'C';
            else if (currentPos == 'C') currentPos = 'B';
        } else if (move == 3) {
            // Swap A and C
            if (currentPos == 'A') currentPos = 'C';
            else if (currentPos == 'C') currentPos = 'A';
        }
    }
    
    cout << currentPos << endl;
    
    return 0;
}