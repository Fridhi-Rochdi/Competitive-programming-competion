#include <iostream>
#include <string>
#include <vector>
using namespace std;

const unsigned long long MOD = 1ULL << 62; // 2^62

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Précalcul des puissances de 2 jusqu'à 2^61
    const int MAX_POWER = 62;
    vector<unsigned long long> power_of_two(MAX_POWER);
    power_of_two[0] = 1; // 2^0 = 1
    for (int i = 1; i < MAX_POWER; ++i) {
        power_of_two[i] = power_of_two[i - 1] * 2;
    }

    int t;
    cin >> t;

    vector<pair<int, string>> test_cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i].first >> test_cases[i].second;
    }

    // Répondre à tous les test cases en une seule passe
    for (const auto& tc : test_cases) {
        int n = tc.first;
        const string& s = tc.second;

        unsigned long long result = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                int exponent = n - i - 1;
                if (exponent < MAX_POWER) {
                    result = (result + power_of_two[exponent]) % MOD;
                }
                // Si exponent >= 62, 2^exponent % MOD = 0, donc on ignore
            }
        }

        cout << result << "\n";
    }

    return 0;
}