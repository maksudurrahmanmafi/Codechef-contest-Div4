#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        string S, T;
    // Input duto string nilam
    if (!(cin >> S >> T)) return 0;

    long long totalCost = 0;

    for (int i = 0; i < S.length(); i++) {
        // Character gulor numerical difference ber kori
        int diff = abs(S[i] - T[i]);
        
        // Circular distance formula apply kori
        int minDistance = min(diff, 26 - diff);
        
        totalCost += minDistance;
    }

    // Smallest cost print kori
    cout << totalCost << endl;
    return 0;
}
