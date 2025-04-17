#include <bits/stdc++.h>
using namespace std;

set<int> computeUniqueGCDs(const vector<int>& A) {
    set<int> results;
    set<int> prevGCDs;

    for (int num : A) {
        set<int> newGCDs = {num}; // Start with the number itself
        for (int g : prevGCDs) {
            newGCDs.insert(__gcd(g, num)); // Compute new GCDs
        }
        prevGCDs = move(newGCDs);
        results.insert(prevGCDs.begin(), prevGCDs.end());
    }
    return results;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    
    for (int i = 0; i < n; i++) cin >> A[i];

    set<int> uniqueGCDs = computeUniqueGCDs(A);

    cout << uniqueGCDs.size() << "\n";
    for (int gcd : uniqueGCDs) cout << gcd << " ";
    cout << "\n";

    return 0;
}
