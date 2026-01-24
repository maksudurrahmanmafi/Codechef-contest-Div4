/* #include <bits/stdc++.h>
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

        sort(v.begin(), v.end());
        int missing = n+1;
        for (int i = 0; i <n; i++)
        {
            if (v[i] != i + 1)
            {
                missing =i+1;
                break;
            }
        }
                cout << missing << '\n';

    }
    return 0;
}
 */

 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int ans = 0;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            ans ^= x;
        }

        cout << ans << '\n';
    }
    return 0;
}
