
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<ll> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         ll diff = 0, ans = 0;
//         for (int i = 0; i + 1 < n; i++)
//             diff = gcd(diff, v[i + 1] - v[i]);
//         for (int i = 0; i + 1 < n; i++)
//             ans += (v[i + 1] - v[i]) / diff - 1;
//         cout << ans << '\n';
//     }
//     return 0;
// }
