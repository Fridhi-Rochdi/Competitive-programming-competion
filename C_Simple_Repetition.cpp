#include <bits/stdc++.h>
using namespace std;
    
    
bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void solve() {
    int x, k;
    cin >> x >> k;

    
    if(x!=1 && k>=2){
        cout<<"NO"<<endl;return;
    }
    if(x==1 && k==2){
        cout<<"YES"<<endl; return;
    }
    if(is_prime(x)){
        cout<<"YES"<<endl; return;
    }
     cout<<"NO"<<endl;
    
}

int main() {
    int t;
    cin >> t;

   
    while (t--) {
        solve();
    }

    return 0;
}
 import math 
  def is_prime(n)
      if(n<=1) return false 
      if(n<=2) return true;
      if(n<=3) return true;
      if(n%2==0 || n%3==0)return false ;
      i=5;
      while ((i*i<=n))
           if(n%i==0) return false 
           i++
     return true
def solve()
     x,k=map(int ,input().split())
     if(x==1 && k==2) 
          print("YES") 
          return
    if(x!=1 && k>=2) 
        print("NO") 
          return
    if(is_prime(x))
       print("YES") 
        return
    print("NO") 

t=int(input())
while t--
 solve()

      
  