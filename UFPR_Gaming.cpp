#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, id;
    while (cin >> n >> id)
    {
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if(x==id&&y==0)ans++;

        }
        cout<<ans<<'\n';
    }
    return 0;
}
