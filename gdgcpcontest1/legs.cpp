#include <bits/stdc++.h>
using namespace std;

int main() {
    int t=0;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count=0;
        int ans = n / 4;
        if (n % 4 != 0) ans++;
        cout << ans << endl;
    }
    return 0;
}
