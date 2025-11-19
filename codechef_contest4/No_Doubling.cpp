// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n;
// //         cin>>n;
// //         vector<long long int>v(n);
// //         for(int i =0;i<n;i++){
// //             cin>>v[i];
// //         }
// //         sort(v.rbegin(),v.rend());
// //         for(int i =0;i<n;i++){
// //             cout<<v[i];
// //             if(i !=n-1) cout<<" ";

// //         }
// //         cout<<'\n';

// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

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
//         vector<long long> v(n);
//         for (int i = 0; i < n; i++)
//             cin >> v[i];
//         map<long long, int> mp;
//         for (auto x : v)
//             mp[x]++;
//         vector<long long> unique;
//         for (auto [y, z] : mp)
//             unique.push_back(y);
//         sort(unique.rbegin(), unique.rend());
//         vector<long long> res;
//         for (auto y : unique)
//         {
//             int cnt = mp[y];
//             for (int i = 0; i < cnt; i++)
//             {
//                 res.push_back(y);
//             }
//         }
//         for (int i = 0; i < n; i++)
//             cout << res[i] << ' ';
//         cout << '\n';
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<ll>v(n);
//         vector<ll>zero;
//         vector<ll>nonzero;
//         for(int i =0;i<n;i++){
//             cin>>v[i];
//             if(v[i]==0) zero.push_back(0);
//             else nonzero.push_back(v[i]);
//         }
//         sort(nonzero.rbegin(),nonzero.rend());
//         vector<ll>res;
//         for(auto x:nonzero) res.push_back(x);
//         for(auto z:zero) res.push_back(z);
//         for(int i =0;i<n;i++){
//             cout<<res[i];
//             if(i!=n-1) cout<<" ";
//         }
//         cout<<'\n';
//         /* code */
//     }
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<ll> a(n);
//         for(int i = 0; i < n; i++) cin >> a[i];

//         // Sort descending to maximize happiness
//         sort(a.rbegin(), a.rend());

//         for(int i = 0; i < n; i++) {
//             cout << a[i];
//             if(i != n - 1) cout << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

   
        ll mx = *max_element(a.begin(), a.end());

        cout << mx << " ";


        bool already = false;
        for(int i = 0; i < n; i++) {
            if(!already && a[i] == mx) {
                already = true; 
                continue;
            }
            cout << a[i]<<" ";
            // if(i != n - 1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
