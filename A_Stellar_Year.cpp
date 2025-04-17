#include <bits/stdc++.h>
using namespace std;
const int N = 10000000;
vector<bool> sv(N + 1, true);



void solve() {
   int n,x;
   cin>>n>>x;
   vector<int>vec(n);
   vector<int>ans;
   for(int i=0;i<n;i++)
   {cin>>vec[i];
    if(x%vec[i]==0){
         ans.push_back(i+1);
    }
   

   }
   
   cout<<ans.size()<<endl;
   for(auto i:ans)cout<<i<<" ";
   cout<<endl;
   
   
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
   

    int t;
    t=1;
    while (t--) solve();
}
