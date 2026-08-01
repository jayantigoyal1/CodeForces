#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 0) {
        cout << 0 << endl;
        return;
    }
    int transitions = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != s[(i + 1) % n]) {
            transitions++;
        }
    }
    if (transitions == n) {
        cout << n << endl;
    } else if (transitions == 0) {
        cout << 1 << endl;
    } else {
        cout << transitions + 1 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}