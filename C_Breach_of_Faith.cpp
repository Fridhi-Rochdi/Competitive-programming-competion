#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> vec(2 * n);
    
    for (int i = 0; i < 2 * n; i++)
        cin >> vec[i];
    
    sort(vec.begin(), vec.end());
    
    vector<long long> ans;
    long long sum = 0;
    
    for (int i = 1; i < n; i++) {
        sum += vec[i+n-1] - vec[i];
        ans.push_back(vec[i]);
        ans.push_back(vec[i+n-1]);
        
    }
    
    
    ans.push_back(sum + vec[2 * n - 1] + vec[0]);
    ans.push_back(vec[0]);
    
    cout << vec[2 * n - 1] << " ";
    for (auto x : ans)
        cout << x << " ";
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
