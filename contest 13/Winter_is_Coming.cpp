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
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> v(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < a){

                if (!flag) {
                    cnt++;
                    flag = true;
                }
              
            }
              else if(v[i]>b){
                    flag =false;
                }
                
        }
        cout << cnt << '\n';
    }
    return 0;
}

