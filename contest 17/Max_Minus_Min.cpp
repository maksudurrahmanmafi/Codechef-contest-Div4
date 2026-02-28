#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        if(n == 1){
            cout << 0 << "\n";
            continue;
        }
        
        sort(a.begin(), a.end());        
        vector<pair<ll,int>> value; 
        for(int i = 0; i < n; i++){
            long long v = a[i];
            for(int j = 0; j <= 60; j++){
                if(v > 2e18) break;
                value.push_back({v, i});
                v *= 2;
            }
        }
        
        sort(value.begin(), value.end());
        
       
        vector<int> cnt(n, 0);
        int cover = 0;
        long long ans = LLONG_MAX;
        int left = 0;
        
        for(int j = 0; j < value.size(); j++){
            int idx = value[j].second;
            cnt[idx]++;
            if(cnt[idx] == 1) cover++;
            
            while(cover == n){
                ans = min(ans, value[j].first - value[left].first);
                int lidx = value[left].second;
                cnt[lidx]--;
                if(cnt[lidx] == 0) cover--;
                left++;
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}
