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
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int>ans =v;
        while(ans.size()>1){
            int x = ans[0]+2*ans[1];
            ans.erase(ans.begin());
            ans[0]=x;
        }
        int mn = ans[0];

          vector<int>ans2 =v;
        while(ans2.size()>1){
            int sz = ans2.size();
            int x = ans2[sz-2]+2*ans2[sz-1];
           ans2.pop_back();
            ans2.back()=x;
        }
        int mx = ans2[0];
        cout<<mn<<" "<<mx<<'\n';
    }
    return 0;
}
