#include<bits/stdc++.h>
using namespace std;
void solve(){
     long long  n;cin>>n;
     vector<long long >vec(n);
     for(auto &y:vec)
     {
        cin>>y;
    }
    vector<long long>pref(n+1);
    pref[0]=0;
    for(int i=1;i<=n;i++)pref[i]=pref[i-1]+vec[i-1];
    int q;cin>>q;
    while (q--)
    {
        long long x,y,m;
        cin>>x>>y>>m;
        cout<<min(max(x,pref[n]),pref[m]+y)<<endl;
       
        
    }
    

     
    
}
int main(){
    int t;//cin>>t;
    t=1;
    while (t--)
    {
        solve();
    }
    
}