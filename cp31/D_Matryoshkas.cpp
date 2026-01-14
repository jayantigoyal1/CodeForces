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

        map<long long, long long> freq;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            freq[x]++;
        }

        int sets = 0;

        while (!freq.empty()) {
            long long cur = freq.begin()->first;
            sets++;
            while (freq.count(cur)) {
                freq[cur]--;
                if (freq[cur] == 0) {
                    freq.erase(cur);
                }
                cur++;
            }
        }

        cout << sets << "\n";
    }
    return 0;
}
