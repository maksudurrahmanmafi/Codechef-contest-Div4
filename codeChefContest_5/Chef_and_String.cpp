// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         string s;
//         cin >> n >> k >> s;

//         // Replace 'I' with previous or next char to maximize score
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == 'I')
//             {
//                 if (i > 0)
//                     s[i] = s[i - 1];
//                 else
//                     s[i] = 'A'; // first char
//             }
//         }

//         int inside_score = 0;
//         for (int i = 1; i < n; i++)
//         {
//             if (s[i] == s[i - 1])
//                 inside_score++;
//         }

//         int extra = 0;
//         if (s[0] == s[n - 1])
//             extra = k - 1;

//         long long total_score = 1LL * inside_score * k + extra;
//         cout << total_score << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        string s;
        cin >> n >> k >> s;

        vector<char> v;
        for (char c : s)
        {
            if (c != 'I')
                v.push_back(c);
        }
        if (v.size() == 0)
        {
            cout << (n * k - 1) << "\n";
            continue;
        }
        ll inside = 0;
        for (ll i = 0; i + 1 < v.size(); i++)
        {
            if (v[i] != v[i + 1])
                inside++;
        }
        ll cross = (v.back() != v.front()) ? 1 : 0;
        ll trans = k * inside + (k - 1) * cross;

        ll total = n * k;
        ll ans = total - 1 - trans;

        cout << ans << "\n";
    }
    return 0;
}
