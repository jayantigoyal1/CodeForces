#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin>>x;
        cin>>s;
        if (x.find(s) != string::npos) {
            cout << 0 << endl;
            continue;
        }

        string curr = x;
        int ops = 0;
        bool found = false;

        while ((int)curr.size() < n + m) {
            curr += curr;
            ops++;

            if (curr.find(s) != string::npos) {
                cout << ops << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
