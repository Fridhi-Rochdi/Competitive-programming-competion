#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> vec;
    int mex = 0, cnt = 0;

    for (int i = 0; i < n - 1; i++) {
        if ((x | i) != x) break;
        vec.push_back(i);
        mex++;
        cnt |= i;
    }

    if ((cnt | mex) == x) {
        vec.push_back(mex);
    } else {
        vec.push_back(x);
    }

    while (vec.size() < n) {
        vec.push_back(0);
    }

    for (auto &v : vec) cout << v << " ";
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
