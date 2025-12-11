// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long int

// // int main()
// // {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         int n;
// //         cin >> n;
// //         vector<ll> v(n);
// //         for (int i = 0; i < n; i++)
// //         {
// //             cin >> v[i];
// //         }
// //         vector<ll>a(n,1);
// //         ll ans = 1;
// //         for(int i =0;i<n;i++){
// //             for(int j =0;j<i;j++){
// //                 ll x = v[j];
// //                 ll y = v[i];
// //                 if((x^y)==llabs(x-y)){
// //                     a[i]=max(a[i],a[j]+1);
// //                 }
// //             }
// //             ans = max(ans,a[i]);
// //         }
// //         cout<<ans<<"\n";
// //     }
// //     return 0;
// // }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isGood(int a, int b) {
    return (a ^ b) == abs(a - b);
}

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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int>sub;
        sort(v.begin(),v.end());
        for(int i =0;i<n;i++){
            bool ok = true;
            for(auto x:sub){
                if(!isGood(x,v[i])){
                    ok = false;
                    break;
                }
            }
            if(ok)sub.push_back(v[i]);
        }
        cout<<sub.size()<<'\n';
    }
    return 0;
}
