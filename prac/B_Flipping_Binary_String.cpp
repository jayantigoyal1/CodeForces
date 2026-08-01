#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> ones, zeros;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') ones.push_back(i + 1);
        else zeros.push_back(i + 1);
    }

    vector<int>* choice = nullptr;

    if (zeros.size() % 2 != 0) {
        choice = &zeros;
    } 
    else if (ones.size() % 2 == 0) {
        choice = &ones;
    }

    if (choice != nullptr) {
        cout << choice->size() << "\n";
        if (!choice->empty()) {
            for (int i = 0; i < choice->size(); i++) {
                cout << (*choice)[i] 
                     << (i == (int)choice->size() - 1 ? "" : " ");
            }
            cout << "\n";
        }
    } else {
        cout << "-1\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}