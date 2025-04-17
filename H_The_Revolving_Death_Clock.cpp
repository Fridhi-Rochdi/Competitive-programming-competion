#include <bits/stdc++.h>

using namespace std;
void solve(){
    long long D1, D2;
    cin >> D1 >> D2;

  
    long long gcd = __gcd(D1, D2);

   
   

   
    

    cout << (D1+D2) / gcd << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}