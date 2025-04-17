#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;cin>>s;
    int cnt0=0,cnt1=0;
    if(s.length()==1){
        cout<<0<<endl;return;
    }
    for(int i=0;i<s.length();i++){
      if(s[i]!='0')cnt0=i+1;
     
    }
    int ans=s.length()-1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0' && i<cnt0-1)ans--;
        
       
      }
      cout<<ans<<endl;
   

}
int main(){
    int n;cin>>n;
    while(n--) solve();
}