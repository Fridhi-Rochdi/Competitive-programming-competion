#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<bool> used(n, false);
    int groups = 0;

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        groups++;
        used[i] = true;
        
        for (int j = i + 1; j < n; j++) {
            if (!used[j] && (a[i] ^ a[j]) >= a[i]) {
                used[j] = true;
            }
        }
    }

    cout << groups << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
