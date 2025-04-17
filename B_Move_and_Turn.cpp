#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    if(n&1){
        cout<<2*(n/2 +1)*(n/2 +2)<<endl;
    }
    else {
        cout<<(n/2 +1)*(n/2 +1)<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    t=1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
