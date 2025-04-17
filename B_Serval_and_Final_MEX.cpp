/*
===================
By Rochdi
===================
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin>>n;
    vector<int>vec(n);
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]!=0){
            cnt++;
        }
    }
    if(cnt==n){
        cout<<1<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }
    else if(vec[0]!=0){
        cout<<2<<endl;
        cout<<2<<" "<<n<<endl;;
        cout<<1<<" "<<2<<endl;
    }
    else if(vec[n-1]!=0){
        cout<<2<<endl;
        cout<<1<<" "<<n-1<<endl;;
        cout<<1<<" "<<2<<endl;
    }
    else {
        cout<<3<<endl;
        cout<<3<<" "<<n<<endl;;
        cout<<1<<" "<<2<<endl;
        cout<<1<<" "<<2<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
