#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long mini = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mini = min(mini, a[i]);
    }

   
    auto it = find(a.begin(), a.end(), mini);
    if (it != a.end()) a.erase(it);

    vector<long long> vec1, vec2;
    for (long long val : a) {
        if (val % mini != 0)
            vec1.push_back(val);
        else
            vec2.push_back(val);
    }
    
    if (vec2.empty()) {
        cout << "No\n";
        return;
    }

    

    long long gcd = vec2[0];
    for (int i = 1; i < vec2.size(); i++) {
        gcd = __gcd(gcd, vec2[i]);
    }
    

    cout << (gcd == mini ? "Yes" : "No") << '\n';
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
