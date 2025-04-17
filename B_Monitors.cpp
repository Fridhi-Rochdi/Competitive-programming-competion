/*=============
By Rochdi
================
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, m;
    cin >> n >> m;
    
   long long l=0,r=min(n,m),ans=0;


    while (l <= r) {
        long long mid = (r + l) / 2;
        
        long long res= ceil((-3 + sqrt(9 + 4 * mid)) / 2)* mid;
        

        if (res <= m) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
