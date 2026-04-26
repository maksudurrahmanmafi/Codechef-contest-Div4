#include<bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string murderer, victim;
    map<string, int> killCount;
    set<string> deadPeople;

    while (cin >> murderer >> victim) {
        killCount[murderer]++;
        deadPeople.insert(victim);
    }

    cout << "HALL OF MURDERERS" << endl;

   
    for (auto const& [name, count] : killCount) {
       
        if (deadPeople.find(name) == deadPeople.end()) {
            cout << name << " " << count << endl;
        }
    }

    return 0;
}