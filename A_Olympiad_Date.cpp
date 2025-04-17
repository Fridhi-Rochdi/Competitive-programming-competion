#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> vec(n);
    int cnt = 0;
    string s = "01032025";
    bool ok = true;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];

      
        char ch = vec[i] + '0';
       int pos = s.find(ch);

        if (pos != string::npos) { 
            s.erase(pos, 1);
        }

     
        if (s.empty() && ok) {
            cnt = i + 1;
            ok = false;
        }
    }
    if(!s.empty()){
        cout<<0<<endl;
    }

    else cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
