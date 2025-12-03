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
        if (n <= 2)
            cout << 0 << '\n';
        else
            cout << ((n - 2) * (n - 2)) / 4 << '\n';
    }
    return 0;
}
