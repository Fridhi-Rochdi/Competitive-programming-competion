#include <bits/stdc++.h>
using namespace std;

void find_path(int u, int parent, int en, vector<int>& path, vector<vector<int>>& tree) {
    path.push_back(u);
    if (u == en) return;
    for (int v : tree[u]) {
        if (v != parent) {
            find_path(v, u, en, path, tree);
            if (path.back() == en) return;
        }
    }
    path.pop_back();
}

void dfs_order(int u, int parent, vector<vector<int>>& tree, vector<int>& order, set<int>& visited) {
    visited.insert(u);
    order.push_back(u);
    for (int v : tree[u]) {
        if (v != parent && !visited.count(v)) {
            dfs_order(v, u, tree, order, visited);
        }
    }
}

void solve() {
    int n, st, en;
    cin >> n >> st >> en;
    
    vector<vector<int>> tree(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    vector<int> path;
    find_path(st, -1, en, path, tree);

    set<int> visited;
    vector<int> order;
    for (int node : path) {
        visited.insert(node);
        order.push_back(node);
    }

    for (int node : path) {
        dfs_order(node, -1, tree, order, visited);
    }

    for (int i = 0; i < n; i++) {
        cout << order[i] << " ";
    }
    cout << "\n";
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
