#include <bits/stdc++.h>
using namespace std;
void solve() {
    int N;
    cin >> N;
    
    vector<int> vec(N);
    for (int i = 0; i < N; ++i) {
        cin >> vec[i];
    }
    
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        ans= max(ans, vec[i] + i + 1);
    }
    
    cout << ans+1 << '\n';
    
    
     
 }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    
    return 0;
}