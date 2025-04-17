#include <iostream>
using namespace std;

bool ok(int x, int y) {
    int z = x ^ y;
    return (x + y > z) && (x + z > y) && (y + z > x);
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int left = 1, right = x - 1, ans = -1;

        while (left <= right) {
            int mid =  (right + left) / 2;

            if (ok(x, mid)) {
                ans = mid; 
                right = mid - 1; 
            } else {
                left = mid + 1;
            }
        }

        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
