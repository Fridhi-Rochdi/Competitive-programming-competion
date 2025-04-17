#include <bits/stdc++.h>
using namespace std;

#define int long long  



void solve() {
   int n,x;cin>>n>>x;
   if(x%2==1){
    for(int i=0;i<n-1;i++)cout<<n<<" ";
    cout<<n-1<<endl;
   }
   else {
    for(int i=0;i<n-2;i++)cout<<n-1<<" ";
    cout<<n<<" ";
    cout<<n-1<<endl;

   }

  
    
    
    
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
