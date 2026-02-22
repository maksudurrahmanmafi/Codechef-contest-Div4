#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     string s;
     cin>>s;
     double n;
     cin>>n;
     vector<double>v;
     double sum = 0.0;
       for (int i = 0; i < 7; i++)
       {
        double x;
        cin>>x;
        v.push_back(x);
        sum+=x;
            //  cin >> v[i];
       }
       double mn = *min_element(v.begin(),v.end());
       double mx = *max_element(v.begin(),v.end());
       double ans = sum -(mn+mx);
       cout<<s <<" "<<fixed<<setprecision(2)<<ans*n<<'\n';

    }
    return 0;
}
