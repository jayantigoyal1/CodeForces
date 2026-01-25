#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool ok = false;
        for (int x : a) {
            if (x == 1) {
                ok = true;
                break;
            }
        }
        if (!ok) {
            for (int i = 0; i < n && !ok; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (gcd(a[i], a[j]) <= 2) {
                        ok = true;
                        break;
                    }
                }
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}
