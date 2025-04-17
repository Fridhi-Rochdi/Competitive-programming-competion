#include <bits/stdc++.h>
using namespace std;

void solve() {
    string S;
    int N;
    cin >> S >> N;
    unordered_map<char, unordered_set<char>> mp;
    for (int  i = 0; i < N; ++i) {
        char u, v;
        cin >> u >> v;
        mp[u].insert(v);
    }
    bool ok = true;
    for (int i = 1; i < S.size(); ++i) {
        if (mp[S[i-1]].find(S[i]) == mp[S[i-1]].end()) {
            ok = false;
            break;
        }
    }
    cout << (ok? "SIM" : "NAO") << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    while(t--)solve();
    
    
    return 0;
}
