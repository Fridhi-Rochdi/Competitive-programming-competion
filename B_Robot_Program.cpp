#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;

    ll zeros = 0, sum = x, temp = 0,cnt=0;;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            sum--;
            
    
        }
        else
        {
            sum++;
           
           zeros=0;
        }
        k--;
        if (sum == 0){
            zeros++;
            cnt++;
            break;
        }
       
    }
    if(cnt==0){
        cout<<0<<endl;return;
    }
    sum=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            sum--;
            
    
        }
        
        else
        {
            sum++;
           
           
        }
        temp++;
        if(sum==0)break;
       
    }
    if(sum==0) zeros+=k/temp;cout<<zeros<<endl; 

   
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}