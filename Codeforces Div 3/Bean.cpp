#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==1)cout<<1<<'\n';
    else if (b==1)
    {
        cout<<2<<'\n';
    }
    else if(c==1)cout<<3<<'\n';
    else cout<<4<<'\n';
    
    return 0;
}
/* #include <iostream>
using namespace std;

int main() {
    int x;
    for (int i = 1; i <= 4; i++) {
        cin >> x;
        if (x == 1) {
            cout << i << endl;
            return 0; // প্রথম ১ পাওয়ার সাথে সাথে প্রোগ্রাম শেষ
        }
    }
    return 0;
} */

/* 
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(4);
    for(int &i : v) cin >> i;

    // ১ কোন পজিশনে আছে তা খুঁজে বের করা
    auto it = find(v.begin(), v.end(), 1);
    cout << (it - v.begin() + 1) << endl;

    return 0;
} */