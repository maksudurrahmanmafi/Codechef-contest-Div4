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
        int cnt[10]={};
        int ans =0;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin>>a;
            cnt[a]++;
            if (cnt[0] >= 3 && cnt[1] >= 1 && cnt[2] >= 2 && cnt[3] >= 1 && cnt[5] >= 1 && ans == 0) {
            ans = i;
        }
        }
        cout<<ans<<'\n';
      
    }
    return 0;
}


