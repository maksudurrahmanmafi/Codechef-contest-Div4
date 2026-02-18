#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<int, int> freq;
        for (int x : a)
            freq[x]++;

        int first = a[0];
        map<int, int> mp;
        for (int i = 1; i < n; i++)
            mp[a[i]]++;

        vector<int> v;
        for (auto p : mp)
        {
            if (p.first != first)
            {

                v.push_back(p.second);
            }
        }

        sort(v.begin(), v.end());

        int alada = freq.size();
        int ops = k;

        for (int cost : v)
        {
            if (ops >= cost)
            {
                ops -= cost;
                alada--;
            }
            else
                break;
        }

        cout << max(1, alada) << "\n";
    }
    return 0;
}
