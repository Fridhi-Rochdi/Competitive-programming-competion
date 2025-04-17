#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    string res = "ODOO";
    int mini = INT_MAX;
    
    for (int i = 0; i <= s.size() - 4; i++) {
        int cnt = 0;
        for (int j = 0; j < 4; j++) {
            if (s[i + j] != res[j])
                cnt++; 
        }mini = min(mini, cnt + int(s.size() - 4)); 
    }
    cout << mini<<endl;;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}