#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long  n, x;
    cin >> n >> x;
    vector<long long> vec(n);
    for (auto &val : vec) cin >> val;

    
    vec.erase(remove_if(vec.begin(), vec.end(), [&](int val) { return val >= x; }), vec.end());

    sort(vec.begin(), vec.end(), greater<long long>());


    long long cnt = n - vec.size(); 
    long long cnt1 = 0, mini = 0;

    for (int i = 0; i < vec.size(); i++) {
        
        cnt1++;
        if (vec[i] * cnt1 >= x) {
            cnt++;
            cnt1 = 0;
        }
    }
    cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
