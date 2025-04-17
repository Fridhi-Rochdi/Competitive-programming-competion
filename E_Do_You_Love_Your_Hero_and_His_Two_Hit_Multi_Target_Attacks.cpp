#include <bits/stdc++.h>
using namespace std;

#define int long long  

int chercher(int k) {
    int l = 0, r = 1e5 + 6;
    while (l < r) {
        int mid = (l + r + 1) / 2; 
        if (mid * (mid - 1) / 2 > k) {
            r = mid - 1;
        } else {
            l = mid;
        }
    }
    return l;
}

void solve() {
    int k;
    cin >> k;
    vector<pair<int, int>> vec;
    int x = 0, y = 0;

    while (k) {
        int a = chercher(k);
        for (int i = 0; i < a; i++) {
            vec.push_back({x, y++});
        }
        x++;
        k -= a * (a - 1) / 2;  // Correction de la formule
    }

    cout << vec.size() << endl;
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i].first << " " << vec[i].second << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
