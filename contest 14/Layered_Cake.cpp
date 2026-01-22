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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
    
        sort(b.begin(), b.end());
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            //     for(int j =0;j<m;j++){
            //         if(a[i]>b[i])cnt++;
            //     }
            cnt += lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        }
        cout << cnt << '\n';
    }
    return 0;
}
