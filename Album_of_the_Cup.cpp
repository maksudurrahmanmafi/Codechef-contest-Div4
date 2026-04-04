#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int m;
    cin>>m;
    set<int>st;
    for(int i =0;i<m;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    cout<<n-st.size()<<endl;
    return 0;
}
