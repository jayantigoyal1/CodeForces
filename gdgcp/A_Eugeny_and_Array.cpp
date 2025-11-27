#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int total_pos = 0, total_neg = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) total_pos++;
        else total_neg++;
    }

    while (m--) {
        int l, r;
        cin >> l >> r;

        int len = r - l + 1;

        if (len % 2 == 1) {
            cout << 0 << "\n";
            continue;
        }

        int need = len / 2;

        if (total_pos >= need && total_neg >= need)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;
}
