// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;

//         ll sum = 0, x;
//         for (int i = 0; i < n; i++) {
//             cin >> x;
//             sum += x;
//         }

//         if (sum >= 0) {
//             cout << 0 << '\n';
//         } else {
//             ll X = (-sum + n - 1) / n;  // ceil division
//             cout << X << '\n';
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum >= 0)
            cout << 0 << '\n';
        else
            cout << (-sum + n - 1) / n << '\n';
    }
    return 0;
}
