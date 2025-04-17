#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;

int spf[MAX]; // Smallest Prime Factor

// Crible pour initialiser les plus petits facteurs premiers
void sieve() {
    for (int i = 2; i < MAX; ++i)
        spf[i] = i;
    for (int i = 2; i * i < MAX; ++i) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAX; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

// Retourne la factorisation en facteurs premiers de x
vector<int> get_factors(int x) {
    vector<int> factors;
    while (x > 1) {
        int p = spf[x];
        factors.push_back(p);
        while (x % p == 0)
            x /= p;
    }
    return factors;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(); // Initialiser le SPF une seule fois

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n + 1);
        vector<vector<int>> factor_list(n + 1); // Liste des facteurs premiers par position

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            factor_list[i] = get_factors(a[i]); // Prétraitement des facteurs de a[i]
        }

        while (q--) {
            int k, l, r;
            cin >> k >> l >> r;
            long long ans = 0;
            for (int i = l; i <= r; ++i) {
                for (int p : factor_list[i]) {
                    while (k % p == 0)
                        k /= p;
                }
                ans += k;
            }
            cout << ans << '\n';
        }
    }

    return 0;
}
