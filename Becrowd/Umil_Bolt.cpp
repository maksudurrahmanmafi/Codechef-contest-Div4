#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    while(cin >> T){   
        double ans = 1e9;  
        for(int i = 0; i < T; i++){
            double timeValue;
            cin >> timeValue;
            if(timeValue < ans)
                ans = timeValue;
        }
        cout << fixed << setprecision(2) << ans << "\n";
    }

    return 0;
}
