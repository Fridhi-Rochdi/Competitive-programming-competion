#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++) 
        cin >> vec[i];

    if (k == 1) {
        long long maxi = 0, maxi2 = 0;
        for (int i = 0; i < n - 1; i++) 
            maxi = max(maxi, vec[i]);

        for (int i = n - 1; i > 0; i--) 
            maxi2 = max(maxi2, vec[i]);

        cout << max(maxi + vec[n-1], maxi2 + vec[0]) << endl;
    } else {
        sort(vec.begin(), vec.end(), greater<long long>());

        long long sum = 0;
        for (int i = 0; i < min(k + 1, n); i++) 
            sum += vec[i];

        cout << sum << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
