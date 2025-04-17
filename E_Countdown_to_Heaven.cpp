/*
===================
By Rochdi
===================
*/
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string n;
    cin >> n;

    int k = 0, t = 0;

    while (k < 18)
    {

        if ((n.back() - '0') % 2 == 0)
        {
            k++;

            int carry = 0;
            for (char &ch : n)
            {
                int ra9em = (ch - '0') + carry * 10;
                carry = ra9em % 2;
                ch = (ra9em / 2) + '0';
            }

            int pos = n.find_first_not_of('0');
            if (pos != string::npos)
            {
                n.erase(0, pos);
            }
            else
            {
                n = "0";
            }
            if (n.empty())
                n = "0";
        }
        else
        {
            break;
        }
    }

    while (t < 2)
    {

        int sum = 0;
        for (char ch : n)
        {
            sum += (ch - '0');
        }
        if (sum % 3 == 0)
        {
            t++;

            int carry = 0;
            for (char &ch : n)
            {
                int digit = (ch - '0') + carry * 10;
                carry = digit % 3;
                ch = (digit / 3) + '0';
            }

            int pos = n.find_first_not_of('0');
            if (pos != string::npos)
            {
                n.erase(0, pos);
            }
            else
            {
                n = "0";
            }
            if (n.empty())
                n = "0";
        }
        else
        {
            break;
        }
    }

    cout << k << " " << t << endl;
}
int main()
{
    solve();

    return 0;
}