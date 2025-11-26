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
//         vector<int> a(n), b(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
//      if (n == 1) {
//             cout << "YES\n";
//         } else if (n == 2) {
//             if (a[0] == b[0] && a[1] == b[1])
//                 cout << "YES\n";
//             else
//                 cout << "NO\n";
//         } else {
//             cout << "YES\n";
//         }
//         // cout << "Yes\n";
//     }
//     return 0;
// }

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

//         vector<int> a(n), b(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
//         bool flag =true;
//         for(int i =0;i<n;i++){
//             if(a[i]!=b[i]){
//                 flag =false;
//                 break;
//             }
//         }
//         if(flag) cout<<"Yes\n";
//         else cout<<"No\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N+2), B(N+1);
        for (int i = 1; i <= N; ++i) cin >> A[i];
        for (int i = 1; i <= N; ++i) cin >> B[i];
        
        bool possible = true;
        for (int i = 1; i <= N && possible; ++i) {
            int x = A[i];
            int target = B[i];
            if (x == target) continue;
            
            int L = min(x, target);
            int R = max(x, target);
            int blocked = 0;
            
            if (i > 1) {
                int v = A[i-1];
                if (L < v && v < R) ++blocked;
            }
            if (i < N) {
                int v = A[i+1];
                if (L < v && v < R) ++blocked;
            }
            if (blocked == 2) possible = false;
        }
        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}