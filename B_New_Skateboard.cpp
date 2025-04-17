#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size();
    int res = 0;

    for (int i = 0; i < n; i++) {
        
        if ((s[i] - '0') % 4 == 0) {
            res++;
        }

       
        if (i > 0) {
            int num = (s[i - 1] - '0') * 10 + (s[i] - '0');
            if (num % 4 == 0) {
                res += (i); 
            }
        }
    }

    cout << res << "\n";
    return 0;
}
