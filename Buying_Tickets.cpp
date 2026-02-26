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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string s;
        cin>>s;
        vector<int>available;
          for (int i = 0; i < n; i++)
          {
                if(s[i]=='0')available.push_back(v[i]);
          }
          if(available.size()<k){
            cout<<-1<<'\n';
            continue;
          }
          sort(available.begin(),available.end());
          int ans = 0;
          for(int i =0;i<k;i++){
            ans +=available[i];

          }
          cout<<ans<<'\n';
    }
    return 0;
}
