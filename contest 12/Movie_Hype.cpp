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
        int siz = n + 1;
        vector<int> v(siz);
        for (int i = 0; i <siz; i++)
        {
            cin >> v[i];
        }
        int min_loud = INT_MAX;
        for(int i =0;i<n;i++){
            int cur_mx = max(v[i],v[i+1]);
            if(cur_mx<min_loud)
            min_loud=cur_mx;
        }
        cout<<min_loud<<'\n';
    }
    return 0;
}
