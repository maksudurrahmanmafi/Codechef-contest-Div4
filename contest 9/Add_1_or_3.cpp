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
        int n, m;
        cin >> n >> m;
        if (m >= n && (m - n) % 2 == 0 && (m - n) / 2 <= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         long long N, M;
//         cin >> N >> M;

//         if (M >= N && (M - N) % 2 == 0)
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
//     return 0;
// }
