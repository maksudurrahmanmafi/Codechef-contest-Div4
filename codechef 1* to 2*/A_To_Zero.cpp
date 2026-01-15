#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long ans = 0;
        
        
        if (n % 2 != 0) {
            n -= k;
            ans = 1;
        }
        
       
        long long even = k - 1;
        ans += (n + even - 1) / even; 
        
        cout << ans << endl;
    }
    return 0;
}
