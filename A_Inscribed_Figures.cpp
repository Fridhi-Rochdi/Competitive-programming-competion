#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;cin>>n;vector<int>vec(n);
for(auto &x:vec)cin>>x;
for(int i=1;i<n;i++){
    if(vec[i]==vec[i-1]){
        cout<<"infinite"<<endl;return;
    }
    if((vec[i]==3 && vec[i-1]==2) ||(vec[i]==2 && vec[i-1]==3) ){
        cout<<"Infinite"<<endl;return;
    }
}
long long cnt=0;
for(int i=1;i<n;i++){
   
    if((vec[i]==1 && vec[i-1]==2) || (vec[i]==2 && vec[i-1]==1) ) {
       cnt+=3;
    }
    if((vec[i]==1 && vec[i-1]==3) || (vec[i]==3 && vec[i-1]==1) ) {
        cnt+=4;
     }
    
}
for(int i=0;i<n-2;i++){
   
    if((vec[i]==3 && vec[i+1]==1 && vec[i+2]==2) ) {
       cnt-=1;
    }
    
    
}


cout<<"Finite"<<endl;
cout<<cnt<<endl;

}
int main(){
    int t;t=1;while(t--)solve();
}