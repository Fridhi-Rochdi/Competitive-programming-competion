#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;


ll modpow(ll base, ll exp, ll m) {
    ll result = 1;
    base %= m;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = result * base % m;
        base = base * base % m;
        exp /= 2;
    }
    return result;
}

void solve() {
    ll l, r, k;
    cin >> l >> r >> k;

    ll ans1 = 9 / k + 1;


    ll result = (modpow(ans1, r, mod) - modpow(ans1, l, mod) +mod) % mod; // pour éviter les négatifs
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
