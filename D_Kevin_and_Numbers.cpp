#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    multiset<long long> a;
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        a.insert(val);
    }

    vector<long long> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }

    
    sort(v.begin(), v.end(), greater<long long>());

    int cnt = n - m;

    while (!v.empty() && cnt >= 0) {
        long long x = v.back();
        v.pop_back();

        auto it = a.find(x);
        if (it != a.end()) {
            a.erase(it);
        } else {
            if (x == 1) continue;
            v.push_back(x / 2);
            v.push_back((x + 1) / 2);
            cnt--;

           
            sort(v.begin(), v.end(), greater<long long>());
        }
    }

    cout << (a.empty() ? "Yes" : "No") << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
