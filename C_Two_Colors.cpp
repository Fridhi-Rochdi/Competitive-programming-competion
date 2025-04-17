/*
=========
BY ROCHDI 
=========
*/
#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());  
    
    long long res = 0;
    
   
    for (int i = 1; i < n; i++) {
        auto it1=lower_bound(a.begin(), a.end(), i);
        auto it2=lower_bound(a.begin(), a.end(), n-i);
        long long  res1=m-(it1-a.begin());
        long long  res2=m-(it2-a.begin());
        res+=res1*res2;//  car le choix de couleur de p^ere couleur de la premiere partie est independante de choix de deuxieme motié mais il faut corrigere l'eerur car l'independence cause de probleme car en peut choisi un couleur de la premier partie et le meme couleur peut etre choisi pour la deuxieme moitie 
        res-=min(res1,res2);



        
        
        
    }
    
    cout <<res << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
