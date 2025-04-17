#include <bits/stdc++.h>
using namespace std;

#define int long long  



void solve() {
   int n,x;cin>>n>>x;
   vector<int>vec(n);
   for(auto &x:vec)cin>>x;
   vector<int>a;
   long long sum=0;
   for(int i=0;i<n;i++){
    sum+=vec[i];
    if(sum/(i+1)==x && n%(i+1)==0) a.push_back(i+1);

   }
   if(a.size()==0){
    cout<<"NO"<<endl;
    return;
   }
   if(sum/n==x && sum%n==0){
    cout<<"YES"<<endl;
    return;
   }
   
   for(auto k:a){
    
    bool ok=true;
    for(int i=0;i<n/k;i++){
        int sum=0;
        for(int j=i*k;j<(i+1)*k;j++){
          sum+=vec[j];  
        }
        if(sum%k!=0 ||sum/k!= x){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
        return;  
    }
   }
   cout<<"NO"<<endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
