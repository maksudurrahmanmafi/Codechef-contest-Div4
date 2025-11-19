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
        string s;
        cin >> n >> s;
        bool zero = false;
        int count = 0;
        for (auto c : s)
        {
            if (c == '0')
            {
                zero = true;
            }
            else if (c == '1' && zero)
                count++;
        }
        cout << count << '\n';
    }
    return 0;
}
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
//         string s;
//         cin >> n >> s;

//         bool zero = false;  // start with no '0' seen yet
//         int count = 0;

//         for (auto c : s)
//         {
//             if (c == '0')
//                 zero = true;      // now we’ve seen at least one zero
//             else if (c == '1' && zero)
//                 count++;          // count only '1's after a zero has appeared
//         }

//         cout << count << '\n';
//     }
//     return 0;
// }
