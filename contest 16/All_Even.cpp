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

        vector<long long> a(n);
        int oddCount = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 2 != 0)
            {
                oddCount++;
            }
        }

        if (oddCount % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
