#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mx = *max_element(v.begin(),v.end());

    if(v[0]==mx)cout<<"S\n";
    else cout<<"N\n";
    return 0;
}
