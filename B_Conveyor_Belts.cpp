#include <bits/stdc++.h>
using namespace std;

int distance(int x, int y, int n) {
    return min({x - 1, y - 1, n - x, n - y});
}

void solve() {
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    int layer1 = distance(x1, y1, n);
    int layer2 = distance(x2, y2, n);

    cout << abs(layer1 - layer2) << "\n";
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
