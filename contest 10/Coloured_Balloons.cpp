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
        // int sum = accumulate(v.begin(),v.end(),0);
        // if(v.size()==1)cout<<sum<<'\n';
        int sum =0;
        for(int i =0;i<n;i++){
            sum+=(i+1)*v[i];

        }
        cout<<sum<<'\n';
    }
    return 0;
}
