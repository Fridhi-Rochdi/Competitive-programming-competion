#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    char d;
    cin>>n>>d;
    string s;cin>>s;
    bool ok=false ;
    for(int i=0;i<n;i++){
       if(s[i]-'0'<d-'0'){
        s.insert(i,1,d);
        cout<<s<<endl;return;
      
       } 
    }
    cout<<s+d<<endl;


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
      int t;cin>>t;while (t--)
      {
        solve();
      }
      
    }
    
