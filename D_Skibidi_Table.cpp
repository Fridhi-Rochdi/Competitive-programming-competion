#include<bits/stdc++.h>
using namespace std;
string toBinary(int n) {
    if (n == 0) return "0";
    string binary = "";
    while (n > 0) {
        binary = char(n % 2 + '0') + binary;
        n /= 2;
    }
    return binary;
}
void solve(){
int n;cin>>n;
int q;cin>>q;
while (q--)
{
    string s;
    cin>>s;
    if(s[1]=='>'){

    }
    else 

}


}
int main(){
    
}
