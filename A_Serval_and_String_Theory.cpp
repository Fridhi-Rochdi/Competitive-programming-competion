/*
===================
By Rochdi
===================
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    
    if (s == rev_s) { 
        set<char> st(s.begin(), s.end());
        if (st.size() == 1) {
            cout << "NO\n"; 
            return;
        }
        cout << (k > 0 ? "YES\n" : "NO\n"); 
        return;
    }
    
    if (s < rev_s) {
        cout << "YES\n"; 
        return;
    }
    
    cout << (k > 0 ? "YES\n" : "NO\n");
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
