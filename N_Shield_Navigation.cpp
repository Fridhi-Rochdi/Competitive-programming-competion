#include <iostream>
#include <vector>
using namespace std;

class DSU {
public:
    vector<int> parent, rank;
    DSU(int size) {
        parent.resize(size);
        rank.resize(size, 0);
        for (int i = 0; i < size; ++i) {
            parent[i] = i;
        }
    }
    
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

int index(int x, int y, int M) {
    return x * M + y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M, Q;
    cin >> N >> M >> Q;
    
    DSU dsu(N * M);
    vector<vector<bool>> protected_cells(N, vector<bool>(M, false));
    
    while (Q--) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int x, y;
            cin >> x >> y;
            --x, --y;
            
            if (protected_cells[x][y]) continue;
            protected_cells[x][y] = true;
            
            for (int i = 0; i < N; ++i) {
                if (protected_cells[i][y]) {
                    dsu.unite(index(x, y, M), index(i, y, M));
                }
            }
            for (int j = 0; j < M; ++j) {
                if (protected_cells[x][j]) {
                    dsu.unite(index(x, y, M), index(x, j, M));
                }
            }
        } else {
            int xi, yi, xf, yf;
            cin >> xi >> yi >> xf >> yf;
            --xi, --yi, --xf, --yf;
            
            if (protected_cells[xi][yi] && protected_cells[xf][yf] && dsu.find(index(xi, yi, M)) == dsu.find(index(xf, yf, M))) {
                cout << "SIM\n";
            } else {
                cout << "NAO\n";
            }
        }
    }
    
    return 0;
}
