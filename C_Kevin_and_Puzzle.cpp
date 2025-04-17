#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> a(n+1,0);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    a[0]=0;
    for(int i=1;i<=n;i++)a[i]=vec[i-1];
    vector<int> dp(n+1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
      
        if (a[i] == a[i - 1]) {
            dp[i] = (dp[i] + dp[i - 1]) % MOD;
        } 
        if (i >1 && a[i ] == a[i - 2] + 1) {
            dp[i] = (dp[i] + dp[i - 2]) % MOD;
        }
    }
    
    cout << (dp[n - 1] +dp[n])%MOD<< "\n"; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
