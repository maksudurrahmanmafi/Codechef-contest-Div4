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
                // যদি অন্তত ১টি প্রবলেম সলভ করে, তবে স্ট্রিক বাড়বে
                current_streak++;
                // সর্বোচ্চ স্ট্রিক আপডেট করা
                max_streak = max(max_streak, current_streak);
            }
            else
            {
                // ০ পাওয়া মানে স্ট্রিক ভেঙে গেছে
                current_streak = 0;
            }
        }

        cout << max_streak << endl;
    }
    return 0;
}
