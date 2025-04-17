#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '.')
            st.insert(s[i]);
    }
   
 
 
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
 
    for (int i = 0; i < n - 1 ; i++)
    {
        if (s[i] != '.' && s[i] ==s[i+1])
        {
            cout<<-1<<endl;return; 
        }
            
    }
 
 
    if (st.size() >= 3)
    {
        cout << st.size() << endl;
        return;
    }
    if (st.size() == 0)
    {
        cout << 2 << endl;
        return;
    }
    
    int cnt1 = -1;
    int ans = 2;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.' && i != 0 && cnt1 == -1)
        {
            cnt1 = i - 1;
            
        }
        if (cnt1 != -1 && s[i] != '.')
        {
            if (s[cnt1] == s[i])
            {
                if ((cnt1 - i - 1) % 2 == 0)
                {
                    ans++;
                    cnt1 = -1;
                }
            }
            else
            {
                if ((cnt1 - i - 1) % 2)
                {
                    ans++;
                    cnt1 = -1;
                }
               
            }
            if (ans == 3)
            {
                cout << 3 << endl;
                return;
            }
        }
    }
    cout << min(ans,3) << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
 
    return 0;
}