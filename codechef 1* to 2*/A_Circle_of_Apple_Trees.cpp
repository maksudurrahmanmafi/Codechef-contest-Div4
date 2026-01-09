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
        // vector<int> v(n);
        // for (int i = 1; i <= n; i++)
        // {
        //     cin >> v[i];
        // }
        // sort(v.begin(),v.end());
        // auto mx =v[n];
        // auto ans = lower_bound(v.begin(),v.end(),mx);
        // int count= ans - v.begin();

        // cout<<count<<"\n";
        set<int> st;
        for (int i = 0; i < n; i++)
        {
           int x;
           cin>>x;
           st.insert(x);
        }
        cout<<st.size()<<'\n';
    }
    return 0;
}
