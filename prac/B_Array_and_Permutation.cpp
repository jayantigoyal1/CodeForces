#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> p(n+1), a(n+1);

        for(int i = 1; i <= n; i++)
            cin >> p[i];

        for(int i = 1; i <= n; i++)
            cin >> a[i];

        bool ok = true;

        for(int i = 1; i <= n; i++){
            if(a[i] != p[i]){
                bool left_same = (i > 1 && a[i] == a[i-1]);
                bool right_same = (i < n && a[i] == a[i+1]);

                if(!left_same && !right_same){
                    ok = false;
                    break;
                }
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
