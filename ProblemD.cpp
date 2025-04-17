#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 44;
vector<long long> fib(MAX_N + 2);  // Fibonacci numbers up to F_44

void precompute_fibonacci() {
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i <= MAX_N + 1; i++) {
        fib[i] = fib[i - 2] + fib[i - 1];
    }
}

bool canCut(int n, long long x, long long y) {
    long long width = fib[n + 1], height = fib[n];

    for (int i = n; i > 0; i--) {
        if (x > fib[i - 1] && y > fib[i]) return false; // Out of bounds
        if (y > fib[i]) {  // The cell is in the remaining smaller rectangle
            y -= fib[i];   // Shift y-coordinates to match the new rectangle
        } else {  // The cell is in the largest square, continue recursion
            swap(width, height); // The rectangle orientation changes
        }
    }
    return true; // If we reach this point, the cell can be in a 1x1 square
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute_fibonacci(); // Precompute Fibonacci numbers

    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        cout << (canCut(n, x, y) ? "YES\n" : "NO\n");
    }

    return 0;
}
