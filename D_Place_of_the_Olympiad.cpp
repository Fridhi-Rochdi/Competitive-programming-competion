#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    if (k == n * m) {
        cout << m << endl;
        return;
    }
    int ans = (int) ceil((double) k / n);
    int f = m - ans + 1;
    cout << (int) ceil((double) ans / f) << endl;
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
