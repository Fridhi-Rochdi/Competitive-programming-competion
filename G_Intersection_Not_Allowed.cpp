#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n, q;
    cin >> n >> q;
    map<int, vector<pair<int, int>>> b;
    vector<tuple<int, int, int>> a(q);
    
    for (int i = 0; i < q; ++i) {
        int x, l, r;
        cin >> x >> l >> r;
        a[i] = {x, l, r};
        b[x].emplace_back(l, r);
    }
    
    vector<pair<int, int>> c;
    
    for (auto &[x, vec] : b) {
        sort(vec.begin(), vec.end());
        for (int  i = 1; i < vec.size(); ++i) {
            if (vec[i].first <= vec[i - 1].second) {
                c.push_back(vec[i]);
                c.push_back(vec[i - 1]);
            }
        }
    }
    
    if (c.empty()) {
        cout << "YES" << endl;
        return;
    }
    
    for (auto &[x, l, r] : a) {
        map<int, vector<pair<int, int>>> g = b;
        auto &vec = g[x];
        vec.erase(remove(vec.begin(), vec.end(), make_pair(l, r)), vec.end());
        bool ok = true;
        for (auto &[k, vec] : g) {
            sort(vec.begin(), vec.end());
            for (int  i = 1; i < vec.size(); ++i) {
                if (vec[i].first <= vec[i - 1].second) {
                    ok = false;
                    break;
                }
            }
            if (!ok) break;
        }
        
        if (ok) {
            cout << "YES" << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}