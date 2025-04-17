#include <bits/stdc++.h>
using namespace std;

void solve() {
   {
        long long  n, m, k;
        cin >> n >> m >> k;
        vector<long long > a(n,0);
        for(int i=0;i<n;i++)a[i]=min((int)n / (m + 1),n - m * k);
        
        for (int i = 0; i < min((int)n / (m + 1),n - m * k); i++) {
            long long   gedeh_yeb3dou=n-min((int)n / (m + 1),n - m * k);
            
            for (int j = 0; j <= m; ++j) {
                long long  pos=0;
                if(m==0){
                  pos=i; 
                  if (pos >n-min((int)n / (m + 1),n - m * k) ) {
                    a[gedeh_yeb3dou+i]=i;
                }
               else  a[pos] = i;
                }
                else {
                    pos=i+j*gedeh_yeb3dou / m;
                    if (pos >n-min((int)n / (m + 1),n - m * k) ) {
                        a[gedeh_yeb3dou+i]=i;
                    }
                   else  a[pos] = i;
                }
                
                
            }
        }
        
        for (auto  i:a) {
            cout << a[i] << " ";
        }
        cout << endl;;
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) solve();
    
    return 0;
}
