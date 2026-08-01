#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long n, x;
        cin >> n >> x;
        
        long long sum = 0;
        long long maxBeauty = 0;
        
        for(int i = 0; i < n; i++){
            long long a;
            cin >> a;
            sum += a;
            maxBeauty += (a + x - 1) / x;  // ceil(a/x)
        }
        
        long long minBeauty = (sum + x - 1) / x;  // ceil(sum/x)
        
        cout << minBeauty << " " << maxBeauty << "\n";
    }
}
