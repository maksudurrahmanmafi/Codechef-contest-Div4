#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    while(cin >> n >> q){
        
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        while (q--)
        {
           int c;
           cin>>c;
           cout<<v[c-1]<<'\n';
        }
    }
    
    
    return 0;
}
