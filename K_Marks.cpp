#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    while(n--){
        long long sum=0;
       for(int i=0;i<8;i++){
        long long  x;cin>>x;sum+=x;
       }
       cout<<sum<<endl;
    }
    
    

}
int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    
   int t;cin>>t;
   while (t--)
   {
   solve();
   }
   
    return 0;
}
