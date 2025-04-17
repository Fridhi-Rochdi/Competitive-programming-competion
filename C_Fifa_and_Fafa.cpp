#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, x1, y1, x2, y2;
    cin >> R >> x1 >> y1 >> x2 >> y2;
    double d = sqrt((x2 - x1) * 1.0 * (x2 - x1) + (y2 - y1) * 1.0 * (y2 - y1));
    double xap, yap, r;
    if (d >= R) {
        xap = x1;
        yap = y1;
        r = R;
    } else if (x1 == x2 && y1 == y2) {
        xap = x1 + R / 2.0;
        yap = y1;
        r = R / 2.0;
    } else {
        double xq = x1 + (x1 - x2) / d * R;
        double yq = y1 + (y1 - y2) / d * R;
        xap = (x2 + xq) / 2.0;
        yap = (y2 + yq) / 2.0;
        r = (d + R) / 2.0;
    }
    cout << fixed << setprecision(16) << xap << " " << yap << " " << r << endl;
    return 0;
}
