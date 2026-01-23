#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d < b) {
            cout << -1 << "\n";
            continue;
        }
        long long k = d - b;
        long long L = a + k - c;
        if (L < 0) {
            cout << -1 << "\n";
        } else {
            cout << k + L << "\n";
        }
    }
    return 0;
}
