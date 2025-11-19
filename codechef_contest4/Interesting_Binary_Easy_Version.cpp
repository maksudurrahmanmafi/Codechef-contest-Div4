// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++) cin >> v[i];

//         int ops = 0;
//         for (int i = 0; i < n-1; i++) {
//             if (v[i] == v[i + 1]) {
//                 ops++;

//                 v[i+1]++;

//             }
//         }
//         cout << ops << '\n';
//     }
//     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++) cin >> v[i];

//         int ops = 0;
//         for (int i = 1; i < n; i++) {
//             if (v[i] == v[i -1]) {
//                 v[i]++; // increment current to make it different
//                 ops++;
//             }
//         }

//         cout << ops << '\n';
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++) cin >> v[i];

//         int ops = 0;
//         for (int i = 1; i < n; i++) {
//             if (v[i] == v[i - 1]) {
//                 ops++;

//                 v[i]++;

//             }
//         }
//         cout << ops << '\n';
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++) cin >> v[i];

//         int ops = 0;
//         for (int i = 1; i < n; i++) {
//             if (v[i] == v[i-1]) {
//                 ops++;
//                 v[i]++; // increment the first of the pair
//             }
//         }
//         cout << ops << '\n';
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int min_ops(vector<int> a)
{
    int n = a.size();
    int ops1 = 0, ops2 = 0;

    // Strategy 1: increment the current element if duplicate
    vector<int> b = a;
    for (int i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
        {
            ops1++;
            b[i]++;
        }
    }

    // Strategy 2: increment the previous element if duplicate
    b = a;
    for (int i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
        {
            ops2++;
            b[i - 1]++;
        }
    }

    return min(ops1, ops2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        cout << min_ops(v) << '\n';
    }
}
