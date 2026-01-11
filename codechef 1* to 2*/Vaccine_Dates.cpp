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
        int x, a, b;
        cin >> x >> a >> b;
        if (x >= a && x <= b)
            cout << "Take second dose now\n";
        else if (x >= a && b < x)
            cout << "Too Late\n";
        else if (x < a && x < b)
            cout << "Too Early\n";
    }
    return 0;
}
