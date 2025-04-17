#include <bits/stdc++.h>
using namespace std;
vector<int> vec(3e5+10);
void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;

   
    for (int i = 1; i <= n; i++) cin >> vec[i];

    int l = -1, r = 1e9 + 10;
    while (l + 1 < r) {
        int mid = (l + r) / 2, cnt = k;
        int last = 0; 

        for (int i = 1; i <= n; i++) {
            if (vec[i] >  mid && s[i - 1] == 'R') {
                last = 0;
            } 
            else if (vec[i] > mid && s[i - 1] == 'B') {
                if (last == 0) cnt--; 
                last = 1;
            }
        }

        if (cnt >= 0) r = mid;
        else l = mid;
    }

    cout << r << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
