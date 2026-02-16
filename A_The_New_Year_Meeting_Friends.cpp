#include <bits/stdc++.h>
using namespace std;

int main() {
    int x[3];
    cin >> x[0] >> x[1] >> x[2];
    
    sort(x, x+3); // sort to find median easily
    
    int median = x[1]; // middle element
    int total_distance = abs(x[0]-median) + abs(x[1]-median) + abs(x[2]-median);
    
    cout << total_distance << endl;
    return 0;
}
