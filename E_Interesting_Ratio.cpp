#include <bits/stdc++.h>
using namespace std;
const int N = 10000000;
vector<bool> sv(N + 1, true);

void sieve() {
    sv[0] = sv[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (sv[i]) {
            for (int j = i * i; j <= N; j += i) {
                sv[j] = false;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        if (sv[i]) ans += n / i;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    sieve();  

    int t;
    cin >> t;
    while (t--) solve();
}
