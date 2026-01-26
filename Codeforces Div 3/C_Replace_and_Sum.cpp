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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1), b(n + 1),suffix(n+2,0), prefix(n + 1,0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        for (int i = n; i >= 1; i--)
        {
           suffix[i] = max(b[i], suffix[i + 1]);
        }
        for (int i = 1; i <= n; i++)
        {
          prefix[i] = prefix[i - 1] + max(a[i], suffix[i]);
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << prefix[r] - prefix[l - 1] << " ";
        }
        cout << "\n";
    }
    return 0;
}
 

