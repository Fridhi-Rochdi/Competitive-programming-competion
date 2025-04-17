#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = 0, r = 0;
    int diff = 0;

    for (int i = 0; i < n; ++i) {
        int akber = 0, asgher = 0;
        for (int j = i + 1; j < n; ++j) {
                  if(v[i] < v[j])
                akber++;
            
               else if(v[i] >v[j]) asgher++;

            int current_diff = akber - asgher;
            if (current_diff < diff) { 
                diff = current_diff;
                l = i;
                r = j;
            }
        }
    }

    cout << l + 1 << " " << r + 1 << endl; // Conversion en base 1
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
