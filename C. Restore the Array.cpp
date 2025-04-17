#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n - 1), a(n);

    for (int &x : b) cin >> x;

    a[0] = b[0];
    for (int i = 1; i < n - 1; i++) {
        a[i] = min(b[i - 1], b[i]); 
    }
    a[n - 1] = b[n - 2];

    for (int x : a) cout << x << " ";
    cout << endl;
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
