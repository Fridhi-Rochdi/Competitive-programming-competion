#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n ;
    
    vector<long long> vec(n);
    vector<long long> perm(n);
    vector<long long> ans(n,0);
    vector<long long >vis(n);
    for (auto &val : vec) cin >> val;
    for (auto &val : perm) cin >> val;
    int res=0;
    for(int i=0;i<n;i++){
        int cnt=perm[i]-1;
        
        while (vis[cnt]==0)
        {
           vis[cnt]=1;
           res++;
           cnt=vec[cnt]-1;
        }
        ans[i]=res;
        
        
    }
    for(auto &val :ans) cout<<val<<" ";
    cout<<endl;
    
   
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
