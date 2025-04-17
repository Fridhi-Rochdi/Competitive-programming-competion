#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n,x;cin>>n>>x;
     vector<int>vec(n);
     for(auto y:vec)
     {
        cin>>y;
        if(y<x)cout<<1<<" ";
        else cout<<0<<" ";}cout<<endl;

     
    
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}