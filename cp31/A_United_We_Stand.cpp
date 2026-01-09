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

        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        long long m = a[0];
        vector<long long> b, c;

        for (auto x : a) {
            if (x == m) b.push_back(x);
            else c.push_back(x);
        }

        if (b.empty() || c.empty()) {
            cout << -1 << "\n";
        } else {
            cout << b.size() << " " << c.size() << "\n";
            for (auto x : b) cout << x << " ";
            cout << "\n";
            for (auto x : c) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
