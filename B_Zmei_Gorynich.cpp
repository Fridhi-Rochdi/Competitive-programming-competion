#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, h;
        cin >> n >> h;
        
        int di, hi;
        int cnt = 0, maxDiff = 0, maxD = 0;

        for (int i = 0; i < n; i++) {
            cin >> di >> hi;
            if (hi >= di) cnt++;
            maxDiff = max(maxDiff, di - hi);
            maxD = max(maxD, di);
        }
        h -= maxD;
        if(h<=0){
            cout << 1 << endl;  
        }
        else if (maxDiff<=0) {
            cout << -1 << endl;
        } else {
            
            if (h <= 0) {
                cout << 1 << endl;  // Si maxD suffit déjà
            } else {
                cout << 1 + (h + maxDiff - 1) / maxDiff << endl; // Arrondi vers le haut
            }
        }
    }
    return 0;
}
