#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<tuple<int,int,int>> ships(n);

    for(int i = 0; i < n; i++){
        int x,y,z;
        cin >> x >> y >> z;
        ships[i] = {x,y,z};
    }

    for(int i = 0; i < n; i++){
        int x1,y1,z1;
        tie(x1,y1,z1) = ships[i];

        int minDist = INT_MAX;

        for(int j = 0; j < n; j++){
            if(i == j) continue;

            int x2,y2,z2;
            tie(x2,y2,z2) = ships[j];

            int dist = (x1-x2)*(x1-x2)
                     + (y1-y2)*(y1-y2)
                     + (z1-z2)*(z1-z2);

            minDist = min(minDist, dist);
        }

        if(minDist <= 400) cout << "A\n";
        else if(minDist <= 2500) cout << "M\n";
        else cout << "B\n";
    }

    return 0;
}