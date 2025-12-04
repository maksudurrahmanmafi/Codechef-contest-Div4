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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<int> endA(n), stA(n);
        vector<int> endB(n), stB(n);
        int cur = 0;
        for(int i =0;i<n;i++){
            cur = max(a[i],cur+a[i]);
            endA[i] =cur;
        }
        cur = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            cur = max(a[i], cur + a[i]);
            stA[i] = cur;
        }
        cur =0;
           for(int i =0;i<n;i++){
            cur = max(b[i],cur+b[i]);
            endB[i] =cur;
        }
        cur =0;
        for (int i = n - 1; i >= 0; i--)
        {
            cur = max(b[i], cur + b[i]);
            stB[i] = cur;
        }
        ll ans =LLONG_MIN;
        for(int i =0;i<n;i++){
            ll mxA =(ll)endA[i]+stA[i]-a[i];
            ll mxB =(ll)endB[i]+stB[i]-b[i];
            ans =max(ans,mxA+mxB);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
