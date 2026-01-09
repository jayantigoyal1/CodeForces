#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(count(arr.begin(), arr.end(), 1)==n) cout<<"Alice"<<endl;
        else if(arr[0]==0 && arr.back()==0) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return 0;
}
