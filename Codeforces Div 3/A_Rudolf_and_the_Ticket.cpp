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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int cnt =0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(v[i]+b[j]<=k)cnt++;

            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
