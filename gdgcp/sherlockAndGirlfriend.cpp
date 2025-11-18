#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> isPrime(n + 2, 1);
    isPrime[0] = isPrime[1] = 0;

    for(int i = 2; i * i <= n + 1; i++){
        if(isPrime[i] == 1){
            for(int j = i * i; j <= n + 1; j += i){
                isPrime[j] = 0;
            }
        }
    }

    if(n <= 2){
        cout << 1 << "\n";
        for(int i = 0; i < n; i++){
            cout << 1 << " ";
        }
    }
    else{
        cout << 2 << "\n";
        for(int i = 2; i <= n + 1; i++){
            if(isPrime[i] == 1)
                cout << 1 << " ";
            else
                cout << 2 << " ";
        }
    }

    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
