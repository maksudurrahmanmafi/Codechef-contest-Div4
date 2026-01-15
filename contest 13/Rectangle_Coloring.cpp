// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//      ll l,w,r,g,b;
//      cin>>l>>w>>r>>g>>b;
//      vector<ll>x = {l,l,w,w};
//      sort(x.rbegin(),x.rend());
//      multiset<ll>paint={r,g,b};
//      ll cost =0;
//      for(auto x:x){
//         auto it = paint.lower_bound(x);
//         if(it!=paint.end()){
//             cost++;
//             ll remain = *it-x;
//             paint.erase(it);
//             if(remain>0)
//             paint.insert(remain);
//         }else{
//             ll need = x;
//             ll used =0;
//             while(need>0&&!paint.empty()){
//                 auto it2 =prev(paint.end());
//                 ll ans = min(*it2,need);
//                 need-=ans;
//                 ll rem = *it2 -ans;
//                 paint.erase(it2);
//                 if(rem>0)paint.insert(rem);
//                 used++;

//             }
//             cost +=used;
//         }
//      }
//      cout<<cost<<'\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll L, W, R, G, B;
        cin >> L >> W >> R >> G >> B;

        vector<ll> side = {L,L,W,W};
        sort(side.rbegin(), side.rend()); 

        vector<ll> colors = {R,G,B};
        sort(colors.rbegin(), colors.rend()); 

        ll cost = 0;

        for(auto x : side) {
          
            if(colors[0] >= x) {
                colors[0] -= x;
                cost += 1;
            } else {
                ll need = x;
                ll used = 0;
               
                for(int i = 0; i < 3 && need > 0; i++) {
                    ll take = min(colors[i], need);
                    colors[i] -= take;
                    need -= take;
                    if(take > 0) used++;
                }
                cost += used;
            }
            sort(colors.rbegin(), colors.rend()); 
        }

        cout << cost << "\n";
    }
    return 0;
}
