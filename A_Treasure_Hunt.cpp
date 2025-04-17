#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, a;
    cin >> x >> y >> a;

    long long total = 5 * a;
    long long cycle = x + y;  
    long long remain = total % cycle;  
    if ( remain< x) {
        cout << "NO"<<endl;; 
    } else {
        cout << "YES"<<endl;; 
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
