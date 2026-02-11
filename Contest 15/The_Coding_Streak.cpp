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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int max_streak = 0;
        int current_streak = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                current_streak++;
                max_streak = max(max_streak, current_streak);
            }
            else
            {

                current_streak = 0;
            }
        }

        cout << max_streak << endl;
    }
    return 0;
}
