#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {
    // Optimization for faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string murderer, victim;
    map<string, int> killCount;
    set<string> deadPeople;

    // Read input until End-of-File
    while (cin >> murderer >> victim) {
        killCount[murderer]++;
        deadPeople.insert(victim);
    }

    cout << "HALL OF MURDERERS" << endl;

    // Iterating through map: it is already sorted lexicographically
    for (auto const& [name, count] : killCount) {
        // If the murderer is NOT in the set of dead people, print them
        if (deadPeople.find(name) == deadPeople.end()) {
            cout << name << " " << count << endl;
        }
    }

    return 0;
}