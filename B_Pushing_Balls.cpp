#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            a[i][j] = row[j] - '0';
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m && a[i][j] == 1; j++) {
            vis[i][j] = 1;
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n && a[i][j] == 1; i++) {
            vis[i][j] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1 && vis[i][j] == 0) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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
