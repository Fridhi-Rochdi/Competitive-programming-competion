/*
================
By Rochdi
================
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    map<string, string> mp;
    
    for (int i = 0; i < n; i++) {
        string x, y;
        cin >> x >> y;
        mp[x] = y;
    }
    
    int k;
    cin >> k;
    map<string, ll> mp1;
    
    for (int i = 0; i < k; i++) {
        ll x;
        string y;
        cin >> y >> x;
        
        if (mp.find(y) != mp.end()) { 
            mp1[mp[y]] += x;
        }
    }
    
    ll maxi = 0;
    for (auto i : mp1) {
        maxi = max(maxi, i.second);
    }
    
    for (auto i : mp1) {
        if (maxi == i.second) {
            cout << i.first << endl;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    t=1;
    while (t--) {
        solve();
    }
    
    return 0;
}
