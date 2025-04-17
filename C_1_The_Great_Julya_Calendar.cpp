#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;

int solve(ll n) {
    queue<pair<ll, int>> q;
    unordered_set<ll> visited;
    
    q.push({n, 0});
    visited.insert(n);

    while (!q.empty()) {
        ll num = q.front().first;
        int steps = q.front().second;
        q.pop();

        if (num == 0) return steps;

        ll temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            temp /= 10;
            
            if (digit == 0) continue; 

            ll new_num = num - digit;
            if (visited.find(new_num) == visited.end()) {
                visited.insert(new_num);
                q.push({new_num, steps + 1});
            }
        }
    }
    return -1; 
}

int main() {
    ll n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}
