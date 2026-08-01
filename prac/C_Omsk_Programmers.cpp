#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        long long a,b,x;
        cin>>a>>b>>x;
        vector<pair<long long,long long>> A, B;
        long long cur = a;
        long long cost = 0;
        while (true) {
            A.push_back({cur, cost});
            if (cur == 0) break;
            cur /= x;
            cost++;
        }
        cur = b;
        cost = 0;
        while (true) {
            B.push_back({cur, cost});
            if (cur == 0) break;
            cur /= x;
            cost++;
        }
        long long ans = llabs(a-b);
        for (auto it1 : A) {
            long long p = it1.first;
            long long da = it1.second;
            for (auto it2 : B) {
                long long q = it2.first;
                long long db = it2.second;
                ans = min(ans, da + db + llabs(p - q));
            }
        }
        cout << ans << '\n';
    }

    return 0;
}