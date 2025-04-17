#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
vector<bool> sv(N + 1, true);

void sieve() {
    sv[0] = sv[1] = false; 

    for (int i = 2; i * i <= N; i++) {
        if (sv[i]) {
            for (int j = i * i; j <= N; j += i) {
                sv[j] = false; 
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

   
    if (n <= 5) {
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    int cnt = n / 3 - 1;
    vector<int> ans;

    for (int i = cnt; i <= n / 2; i++) {
        if (sv[i]) { 
            for (int j = 1; j <= i; j++) {
                ans.push_back(j);
                if (i != j) {
                    ans.push_back(2 * i - j); 
                }
            }

       
            for (int j = 2 * i; j <= n; j++) {
                ans.push_back(j);
            }

            
            for (int num : ans) {
                cout << num << " ";
            }
            cout << endl;
            return;
        }
    }
}

int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
