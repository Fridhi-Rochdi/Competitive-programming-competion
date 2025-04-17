#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    
    long long sum = (n * (n + 1)) / 2;
    long long cnt = sqrtl(sum);
    if (cnt * cnt == sum) {  
        cout << "-1" << endl;
        return;
    }

  
    vector<int> vec;
    for (int i = 1; i <= n; i++) {
        vec.push_back(i);
    }

    
    for (int i = 1; i < n; i++) { 
        long long sum_i = (1LL * i * (i + 1)) / 2;
        long long cnt_i = sqrtl(sum_i);
        if (cnt_i * cnt_i == sum_i) {
            swap(vec[i - 1], vec[i]); 
        }
    }

   
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
