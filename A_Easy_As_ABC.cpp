#include <bits/stdc++.h>

using namespace std;


const int directions[8][2] = {{0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};


bool isValid(int x, int y) {
    return x >= 0 && x < 3 && y >= 0 && y < 3;
}

void dfs(int x, int y, int len, string current, bool visited[3][3], char grid[3][3], string &miniword) {
    if (len == 3) {
        miniword = min(miniword, current);
        return;
    }
    for (int i = 0; i < 8; i++) {
        int nx = x + directions[i][0], ny = y + directions[i][1];
        if (isValid(nx, ny) && !visited[nx][ny]) {
            visited[nx][ny] = true;
            dfs(nx, ny, len + 1, current + grid[nx][ny], visited, grid, miniword);
            visited[nx][ny] = false;
        }
    }
}
void solve(){
    char grid[3][3];
    
  
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> grid[i][j];
        }
    }

    string miniword = "CCC"; 
    bool visited[3][3] = {false};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            visited[i][j] = true;
            dfs(i, j, 1, string(1, grid[i][j]), visited, grid, miniword);
            visited[i][j] = false;
        }
    }
    cout << miniword << endl;

}

int main() {
   

    
    solve();
    return 0;
}
