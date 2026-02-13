#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // Special case
    if (n <= 2) {
        cout << 1 << "\n";
        for (int i = 0; i < n; i++) cout << 1 << " ";
        cout << "\n";
        return 0;
    }

    // Sieve to detect primes up to n+1
    int maxv = n + 1;
    vector<bool> isPrime(maxv + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= maxv; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= maxv; j += i)
                isPrime[j] = false;
        }
    }

    cout << 2 << "\n";
    for (int price = 2; price <= n + 1; price++) {
        if (isPrime[price])
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }
    cout << "\n";

    return 0;
}
