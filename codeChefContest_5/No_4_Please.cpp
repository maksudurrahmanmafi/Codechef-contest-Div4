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
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                a++;
            else if (x == 2)
                b++;
            else
                c++;
        }
        int cnt = 0;
        if (a > 0 && c > 0)
            cnt += min(a, c);
        if (b > 1)
            cnt += (b - 1);

        cout << cnt << '\n';
    }
    return 0;
}
