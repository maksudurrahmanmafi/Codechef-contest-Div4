#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    set<char> st(s.begin(), s.end());
    set<char> st2(t.begin(), t.end());

    int q;
    cin >> q;
    while (q--)
    {
        string w;
        cin >> w;
        bool okS = true, okT = true;
        for (auto c : w)
        {
            if (!st.count(c))
                okS = false;
            if (!st2.count(c))
                okT = false;
        }
        if (okS && !okT)
        {
            cout << "Takahashi\n";
        }
        else if (!okS && okT)
        {
            cout << "Aoki\n";
        }
        else
        {
            cout << "Unknown\n";
        }
    }
    return 0;
}
