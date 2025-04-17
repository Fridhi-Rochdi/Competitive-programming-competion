#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;


void solve(){
    int n;
    cin >> n;

    vector<int> a(n), depth(n);  
    vector<vector<int>> children(n); 

   
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        a[i]--; 
        depth[i] = depth[a[i]] + 1;
        children[a[i]].push_back(i); 
    }

   
    vector<vector<int>> nodebydepth(n);
    for (int i = 0; i < n; ++i) {
        nodebydepth[depth[i]].push_back(i);
    }

    vector<int> dp(n), tot(n);
    dp[0] = tot[0] = 1;  

    
    for (int d = 1; d < n; ++d) {
        for (int v : nodebydepth[d]) {
            dp[v] = (tot[d - 1] + ((d == 1) ? 0 : (-dp[a[v]] + MOD))) % MOD;
            tot[d] = (tot[d] + dp[v]) % MOD;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans = (ans + dp[i]) % MOD;
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}