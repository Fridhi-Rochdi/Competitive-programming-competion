#include <bits/stdc++.h>
using namespace std;
/*================
by Rochdi
=====================*/
struct hash_pair {
    size_t operator()(const pair<int, int> &p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &val : a) cin >> val;
    for (auto &val : b) cin >> val;
    
    unordered_map<pair<int, int>, vector<int>, hash_pair> g;
    for (int i = 0; i < n; i++) {
        g[{a[i], b[i]}].push_back(i);
    }

    bool ok = true;
    int cnt = -1;
    vector<pair<int, int>> res;
    for (auto j : g) {
        if (j.first.first != j.first.second) {
            if (j.first.first < j.first.second) {
                auto rev_pair = make_pair(j.first.second, j.first.first);
                if (g.count(rev_pair)) {
                    if (g[{j.first.first, j.first.second}].size() != g[rev_pair].size()) {
                        cout << -1 << endl;
                        return;
                    }
                    for (int i = 0; i < g[{j.first.first, j.first.second}].size(); i++) {
                        res.emplace_back(g[{j.first.first, j.first.second}][i], g[rev_pair][i]);
                    }
                }
            }
        } else {
            vector<int> vec = j.second;
            if (vec.size() % 2 == 1) {
                if (cnt == -1) cnt = vec.back();
                else {
                    cout << -1 << endl;
                    return;
                }
            }
            for (int i = 0; i < vec.size() / 2; i++) {
                res.emplace_back(vec[i], vec[i + vec.size() / 2]);
            }
        }
    }

    if (cnt == -1) {
        if (2 * res.size() != n) {
            cout << -1 << endl;
            return;
        }
    } else {
        if (2 * res.size() + 1 != n) {
            cout << -1 << endl;
            return;
        }
    }

    sort(res.begin(), res.end());
    vector<int> ans1, ans2;
    for (auto j : res) {
        ans1.push_back(j.first);
    }
    for (auto j : res) {
        ans2.push_back(j.second);
    }
    reverse(ans2.begin(), ans2.end());

    vector<int> ans3 = ans1;
    if (cnt != -1) ans3.push_back(cnt);
    ans3.insert(ans3.end(), ans2.begin(), ans2.end());

    vector<int> win(n), indexmte3ou(n);
    iota(win.begin(), win.end(), 0);
    for (int i = 0; i < n; ++i) {
        indexmte3ou[win[i]] = i;
    }

    vector<pair<int, int>> perm;
    for (int i = 0; i < n; i++) {
        if (win[i] == ans3[i]) continue;
        int j = indexmte3ou[ans3[i]];
        swap(win[i], win[j]);
        indexmte3ou[win[i]] = i;
        indexmte3ou[win[j]] = j;
        perm.emplace_back(i, j);
    }

    if (perm.size() > n) {
        cout << -1 << endl;
        return;
    }

    cout << perm.size() << endl;
    for (auto [i, j] : perm) {
        cout << i + 1 << " " << j + 1 << endl;
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
