#include <bits/stdc++.h>
using namespace std;

int my_gcd(int a, int b) {
    if (b == 0) return a;
    return my_gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int g = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            if (x != i) {
                g = my_gcd(g, abs(x - i));
            }
        }

        cout << g << "\n";
    }
    return 0;
}
