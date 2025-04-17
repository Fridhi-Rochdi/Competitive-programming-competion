#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, n, m;
    cin >> x >> n >> m;

    
    auto floor = [](long long x, long long n) {
        while (n-- && x > 0) {
            x = x >> 1;
        }
        return x;
    };

    // Function to apply ceil division n times
    auto ceil = [](long long x, long long n) {
        while (n-- && x > 1) {
            x = (x + 1) >> 1;
        }
        return x;
    };

   long long  ans1=ceil(x, m);
    long long mini = floor(ans1, n);
    
   long long ans2=floor(x, n);
    long long maxi = ceil(ans2, m);

    cout << mini << " " << maxi << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}