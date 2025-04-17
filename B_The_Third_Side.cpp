#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;cin>>n;
   vector<int>vec(n);
   for(auto &x:vec)cin>>x;
   if(n==1){
    cout<<vec[0]<<endl;return;
   }
   sort(vec.begin(),vec.end());
   long long sum=vec[0]+vec[1]-1;
   for(int i=2;i<n;i++){
    sum+=vec[i]-1;
   }
   cout<<sum<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
