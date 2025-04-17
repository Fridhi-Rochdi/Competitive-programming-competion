#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n;
    cin >> n;
   while (n--)
   {
    long long x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    cout<<(x2-x1)*(y2-y1)+1<<endl;
   }
   

    return 0;
}
