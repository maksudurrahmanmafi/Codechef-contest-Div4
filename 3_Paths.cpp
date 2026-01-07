// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nULL);
//     int t;
//     cin>>t;
//     while(t--){
//      int n;
//      cin>>n;
//      if(n<3){
//         cout<<-1<<'\n';
//         continue;
//      }
//      vector<vector<int>>v(n,vector<int>(n,0));
//      for(int j =0;j<n;j++){
//         v[0][j] =1;
//      }
//      for(int i = 1;i<n;i++){
//         v[i][n-2] =1;
//         v[i][n-1]=1;
//      }
//      for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<'\n';
//      }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nULL);
//     int t;
//     cin>>t;
//     while(t--){
//      int n;
//      cin>>n;
//      if(n<3){
//         cout<<-1<<"\n";
//         continue;
//      }
//      vector<vector<int>>col(n,vector<int>(n,0));
//      for(int j =0;j<n;j++)col[0][j]=1;
//      for(int i =1;i<n;i++){
//         col [i][n-2]=1;
//         col[i][n-1]=1;
//      }
//      for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             cout<<col[i][j];
//             if (j < n - 1) cout << " ";
//         }
//         cout<<'\n';
//      }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        if (n != 3) {
            cout << -1 << "\n";
            continue;
        }

        vector<vector<int>> col(3, vector<int>(3,0));
        col[0][0] = col[0][1] = col[0][2] = 1;
        col[1][1] = col[1][2] = 1;
        col[2][1] = col[2][2] = 1;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << col[i][j] <<" ";
            }
            cout<<'\n';
        }
    }

    return 0;
}


