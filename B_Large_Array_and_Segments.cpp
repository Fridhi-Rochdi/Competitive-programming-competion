#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, x;
    cin >> n >> k >> x;
    
    vector<long long> vec(n);
    for (auto &val : vec) cin >> val;
    
    vector<long long> pref(n + 1, 0);
    long long cnt = 0;

    for (int i = 1; i <= n ; i++) {
        pref[i] = vec[i - 1] + pref[i - 1];
        
    }
    x=pref[n]*k-x;
    if(x<0){
        cout<<0<<endl;return;
    }
    cnt =x/pref[n];
    x%=pref[n];
    for(int i=0;i<n;i++){
        if(pref[i+1]>x){
            cout<<n*cnt+i+1<<endl;return;
        }
    }

    
    
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
