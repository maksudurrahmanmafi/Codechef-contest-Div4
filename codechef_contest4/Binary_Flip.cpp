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
        string s;
        cin >> n >> s;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
                cnt0++;
            if (s[i] == '1' && s[i + 1] == '1')
                cnt1++;
        }
        if (cnt1 >= cnt0)
            cout << 0 << '\n';
        else
            cout << ((cnt0 - cnt1 + 1) / 2) << '\n';
    }
    return 0;
}
