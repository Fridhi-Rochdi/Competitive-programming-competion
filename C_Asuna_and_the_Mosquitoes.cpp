#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long  n;
    cin >> n;
    
    long long sum = 0,pair=0,impaire=0,maxi=0;
   
  
    vector<long long > a(n);
    
    for (auto &x:a) {
        cin >> x; sum += x;
        if (x % 2 != 0)
            impaire++;
        else pair++;
        maxi=max(maxi,x);
    }
    
    if (pair == n  ) {
        cout << maxi << endl;
        return;
    } 
    else if(impaire==n){
        cout << maxi << endl;
        return;
    } 
else {
        
        cout << sum-impaire+1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
       
    return 0;
}