#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x,y;
    cin >> x>>y;
    if(x==y){
        cout<<-1<<endl;return;
    }
    long long cnt=max(x,y);
    
    for (int i = 0; i <= 32; i++) {
        if ((1LL << i) >= cnt) {
            cout << (1LL << i) - cnt << endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
