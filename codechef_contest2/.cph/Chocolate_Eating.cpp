#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        // if(a==b) cout<<1<<'\n';
        // else cout<< a+b<<'\n';
        long long ans;

        if (a == b)
            ans = 2 * a - 1;
        else
            ans = 2 * min(a, b) + abs(a - b);
        cout << ans << '\n';
    }

    return 0;
}
