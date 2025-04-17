#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;cin>>n;if(n%2==0)cout<<-1<<endl;
   else {
      for(int i=0;i<n;i++){
        cout<<n-i<<" ";
      }
      cout<<endl;
   }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
