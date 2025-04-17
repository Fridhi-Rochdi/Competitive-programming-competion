#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
   
    long long sum = 0;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    if (sum == 14)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    t = 1;
    while (t--)
       { solve();}
       return 0;
}