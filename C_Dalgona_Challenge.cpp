#include <iostream>
using namespace std;


long long solve(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;
    if (n == 4) return 8;

  
    long long C2 = (long long)n * (n - 1) / 2;
    long long C4 = (long long)n * (n - 1) * (n - 2) * (n - 3) / 24;

  
    return 1 + C2 + C4;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

       
        cout << solve(n) << '\n';
    }

    return 0;
}