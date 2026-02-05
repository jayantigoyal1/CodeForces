#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool liar = false;

        // Case 1: consecutive 0 0
        for (int i = 0; i + 1 < n; i++) {
            if (a[i] == 0 && a[i + 1] == 0) {
                liar = true;
                break;
            }
        }

        // Case 2: n == 2 and both are 1
        if (n == 2 && a[0] == 1 && a[1] == 1) {
            liar = true;
        }

        cout << (liar ? "YES" : "NO") << '\n';
    }

    return 0;
}
