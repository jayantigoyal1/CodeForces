#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a == b) {
            cout << 0 << "\n";
            continue;
        }
        long long cost = 0;
        if (a < b) {
            while (a < b) {
                if (a % 2 == 0) cost += min(x, y);
                else cost += x;
                a++;
            }
            cout << cost << "\n";
        } 
        else {
            if (a % 2 == 0) {
                cout << -1 << "\n";
            } 
            else {
                if (b == a - 1) cout << y << "\n";
                else cout << -1 << "\n";
            }
        }
    }
}
