#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TrafficLight {
    char c;
    int p;
    int t;
};
void solve(){
    int n, X;
    cin >> n >> X;
    vector<TrafficLight> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].c >> a[i].p >> a[i].t;
    }
    
  
    sort(a.begin(), a.end(), [](const TrafficLight &a, const TrafficLight &b) {
        return a.p < b.p;
    });
    
    int stop = 0;
    for (const auto i : a) {
        int fi_gedeh_wselt = i.p + stop;
        int cycle = 2 * i.t;
        int phase = fi_gedeh_wselt % cycle;
        int nestanna = 0;
        if (i.c == 'R') {
            if (phase < i.t) {
                nestanna = i.t - phase;
            }
        } else {
            if (phase >= i.t) {
                nestanna = cycle - phase;
            }
        }
        stop += nestanna;
    }
    

    cout << X + stop << endl;
}
int main() {
   solve();
    
    return 0;
}