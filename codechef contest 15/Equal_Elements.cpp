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
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> v[i];
        // }
        set<int>st;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            st.insert(x);
        }
        cout<<st.size()-1<<endl;

    }
    return 0;
}
