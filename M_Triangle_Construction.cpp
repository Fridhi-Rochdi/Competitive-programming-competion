#include<bits/stdc++.h>
using namespace std;
void  solve(){
    int n;cin>>n;
    vector<long long >vec(n);
    long long maxi=0,sum=0;
    for(auto x:vec){
     cin>>x;
     sum+=x;
     maxi=max(maxi,x);    }
    if(maxi>=2*(sum-maxi))cout<<sum-maxi<<endl;
    else cout<<sum/3<<endl;;
}
int main(){
    int t;t=1;while(t--)solve();
}