#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        if (count(s.begin(),s.end(),'0') == s.size())
            cout << s.size() << '\n';
        else if (count(s.begin(),s.end(),'1') == s.size())
            cout << 0 << '\n';

        else {
            // if(s.find('0')==s.begin()) cout<<0<<'\n';

            if(s[0]=='1') cout<<0<<'\n';
            else{
                 int Wolf = s.find('1');
                cout << Wolf << '\n'; 
            }

        }    
    }
    return 0;
}
