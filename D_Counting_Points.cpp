#include <bits/stdc++.h>
using namespace std;

#define int long long  
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>x(n),r(n);
    for(int i=0;i<n;i++) {
        cin>>x[i];
    }
    for(int i=0;i<n;i++) {
        cin>>r[i];
    }
    map<long long,long long >mp;
    for(int i=0;i<n;i++){
       int  left=x[i]-r[i];
       int  right=x[i]+r[i];
       for(int j=left;j<=right;j++){
           int cnt=sqrtl(-(x[i]-j)*(x[i]-j)+r[i]*r[i]);
           mp[j]=max(mp[j],cnt);
       }
    }
    int ans=0;
    for(auto i:mp){
      ans+=2*i.second+1;
    }
    cout<<ans<<endl;

}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
