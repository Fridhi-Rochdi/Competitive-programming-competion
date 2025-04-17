#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    
    // Step 1: Read the input and calculate frequencies of numbers
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    vector<int> pairs;
    int leg = -1;  // To store the pair used as the legs

    // Step 2: Try to find two distinct pairs
    for (auto &[val, cnt] : freq) {
        if (cnt >= 2) {
            pairs.push_back(val);
            if (cnt >= 4) {
                // If there are at least 4 occurrences of the same number, this can form a trapezoid
                cout << val << " " << val << " " << val << " " << val << '\n';
                return;
            }
        }
    }

    // Step 3: If there are two distinct pairs, use them as the bases
    if (pairs.size() >= 2) {
        sort(pairs.begin(), pairs.end());
        cout << pairs[0] << " " << pairs[0] << " " << pairs[1] << " " << pairs[1] << '\n';
        return;
    }

    // Step 4: If there is exactly one pair, we need to find the other two sides
    if (pairs.size() == 1) {
        leg = pairs[0];
        // Remove the pair from the frequency map
        freq[leg] -= 2;

        vector<int> remaining;
        for (auto &[val, cnt] : freq) {
            for (int i = 0; i < cnt; i++) {
                remaining.push_back(val);
            }
        }

        // Step 5: Sort the remaining numbers and check adjacent pairs for validity
        sort(remaining.begin(), remaining.end());
        for (int i = 0; i < remaining.size() - 1; i++) {
            if (remaining[i + 1] - remaining[i] < 2 * leg) {
                cout << remaining[i] << " " << remaining[i] << " " << leg << " " << leg << '\n';
                return;
            }
        }
    }

    // Step 6: If no valid trapezoid can be formed
    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
