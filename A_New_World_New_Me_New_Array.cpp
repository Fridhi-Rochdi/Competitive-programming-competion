#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, p;
    cin >> n >> k >> p;
    
   if(n*p<abs(k))
   {cout<<-1<<endl;return;}

    
    long long ans = (abs(k) + p - 1) / p; 
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
