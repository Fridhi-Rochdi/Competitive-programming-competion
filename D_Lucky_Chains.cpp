#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int longestLuckyChain(int x, int y) {
    if (__gcd(x, y) != 1) return 0;
    if (y - x == 1) return -1;

    int d = y - x;
    int res = INT_MAX;

    for (int i = 1; i * i <= d; ++i) {
        if (d % i == 0) {
            int p1 = i;
            int p2 = d / i;

            int r1 = p1 - x % p1;
            if (r1 != p1) res = min(res, r1);

            int r2 = p2 - x % p2;
            if (r2 != p2) res = min(res, r2);
        }
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << longestLuckyChain(x, y) << '\n';
    }

    return 0;
}
