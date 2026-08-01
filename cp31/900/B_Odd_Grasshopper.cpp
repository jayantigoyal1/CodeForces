#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, n;
        cin >> x >> n;

        if(n % 4 == 0){
            cout << x << "\n";
        }
        else if(n % 4 == 1){
            if(x % 2 == 0) cout << x - n << "\n";
            else cout << x + n << "\n";
        }
        else if(n % 4 == 2){
            if(x % 2 == 0) cout << x + 1 << "\n";
            else cout << x - 1 << "\n";
        }
        else{ // n % 4 == 3
            if(x % 2 == 0) cout << x + n + 1 << "\n";
            else cout << x - n - 1 << "\n";
        }
    }
}
