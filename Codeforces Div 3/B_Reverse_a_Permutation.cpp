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
        for(int i =0;i<n;i++){
            int mx = v[i];
            int position = i;
            for(int j =i;j<n;j++){
                if(v[j]>mx){
                    mx = v[j];
                    position =j;
                }
            }
            if(mx>v[i]){
                reverse(v.begin()+i,v.begin()+position+1);
                break;
            }
        }
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
