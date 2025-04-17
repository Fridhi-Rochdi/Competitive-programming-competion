#include<bits/stdc++.h>
using namespace std;
void solve(){    int n;cin>>n;
    if(n%2==0){
        cout<<-1<<endl;
        return;
    }
    cout<<n<<" "<<1<<" ";
    for(int i=0;i<n-2;i++){
        cout<<i+2<<" ";
    }
    cout<<endl;
}
int main(){int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}