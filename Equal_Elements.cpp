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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<ll> st;
        int pair = 0;
        for (int i = 0; i < n; i++)
        {
            if (st.count(v[i]))
            {
                pair++;
                st.clear();
            }
            else
            {
                st.insert(v[i]);
            }
        }
        cout << pair * 2 << '\n';
    }
    return 0;
}
