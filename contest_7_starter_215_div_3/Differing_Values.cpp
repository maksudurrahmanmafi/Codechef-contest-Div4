// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         int N, K;
//         cin >> N >> K;
//         string S;
//         cin >> S;

//         int count0 = 0, count1 = 0;
//         for (char ch : S) {
//             if (ch == '0') count0++;
//             else count1++;
//         }

//         // Maximum characters allowed per group
//         int maxPerGroup = (N + K - 1) / K; // ceil(N/K)

//         if (max(count0, count1) <= maxPerGroup)
//             cout << "Yes\n";
//         else
//             cout << "No\n";
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     int n,k;
     cin>>n>>k;
     string s;
     cin>>s;
     int cnt0=0,cnt1=0;
     for(auto c:s){
        if(c=='0')cnt0++;
        else cnt1++;
     }
     bool ok = true;
     if(k==1){
        if(abs(cnt0-cnt1)>1)ok=false;
     }
     else{
        int ans =(n+k-1)/k;
        if(max(cnt0,cnt1)>ans)ok=false;
     }
     cout<<(ok?"Yes\n":"No\n");
    }
    return 0;
}
