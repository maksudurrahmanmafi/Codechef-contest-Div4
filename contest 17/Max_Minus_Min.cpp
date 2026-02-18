#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        if(n == 1){
            cout << 0 << "\n";
            continue;
        }
        
        sort(a.begin(), a.end());
        
        // For each element, generate all values by multiplying by 2
        // up to 64 times (since values won't need to go beyond 2^60 range)
        // Then sliding window to find min range covering all n elements
        
        vector<pair<long long,int>> vals; // (value, original index)
        for(int i = 0; i < n; i++){
            long long v = a[i];
            for(int j = 0; j <= 60; j++){
                if(v > 2e18) break;
                vals.push_back({v, i});
                v *= 2;
            }
        }
        
        sort(vals.begin(), vals.end());
        
        // Sliding window: find minimum window with all n distinct indices covered
        vector<int> cnt(n, 0);
        int covered = 0;
        long long ans = LLONG_MAX;
        int left = 0;
        
        for(int right = 0; right < vals.size(); right++){
            int idx = vals[right].second;
            cnt[idx]++;
            if(cnt[idx] == 1) covered++;
            
            while(covered == n){
                ans = min(ans, vals[right].first - vals[left].first);
                int lidx = vals[left].second;
                cnt[lidx]--;
                if(cnt[lidx] == 0) covered--;
                left++;
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}