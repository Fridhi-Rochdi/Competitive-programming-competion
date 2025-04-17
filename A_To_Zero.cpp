#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    if (n % 2)
    {
        if (k % 2)
        {cout<<1 + ((n - k+k-2) / ((k - 1)))<<endl;}
        else cout<<1 + ((n - k - 1) / ((k)))<<endl;
    }
    else{
        if (k % 2)
        {  cout<<1 + ((n - k+k-2) / ((k - 1)))<<endl;}
        else cout<<((n ) / ((k )))<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}