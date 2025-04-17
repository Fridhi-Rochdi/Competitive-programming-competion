#include <iostream>
#include <algorithm>
using namespace std;

// Function to calculate GCD
long long gcd(long long a, long long b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    long long x;
    cin >> x;
    long long product = x - 1;
    
    // Initial values of a and b are set to be 1 and x-1
    long long a = 1, b = product;

    // We want to minimize the difference between a and b
    for (long long i = 1; i * i <= product; ++i) {
        if (product % i == 0) {
            long long j = product / i;

            // Check if the pair (i, j) is coprime
            if (gcd(i, j) == 1) {
                a = i;
                b = j;
                
                // Since we are iterating from 1 upwards, the first found coprime pair
                // with minimal difference will be the best answer.
                break;
            }
        }
    }

    cout << a << " " << b << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
