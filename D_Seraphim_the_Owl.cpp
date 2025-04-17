#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n), b(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    

    long long sum = 0;
    for (int i = n - 1; i >= m; i--) {
        sum += min(a[i], b[i]);
    }

    

    long long mini = a[m - 1];
    long long pref = b[m - 1];

    for (int i = m - 2; i >= 0; i--) {
        mini = min(mini, pref + a[i]);
        pref += b[i];
    }

    cout << sum + mini << endl;
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
