#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int cnt1=0,cnt2=0;
    for (int i = 0; i < n; i++) {
        if ((i) % 2) {
           
          if (a[i] == '1')
                cnt2++;
            if((b[i]=='1'))cnt1++;
        } 
        else {
            if (a[i] == '1')
            cnt1++;
       if(b[i]=='1')cnt2++;
            
        }
    }
   
    int ans = n / 2;
    int ans2= n - (n / 2);
    
   cout<<( (cnt1 <= n/2 && cnt2 <= n-n/2) ? "YES":"NO") <<endl;
  

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}