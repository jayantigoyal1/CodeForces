#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        if((x-2*y)%3 != 0){
            cout<<"NO"<<endl;
            continue;
        }
        if (x >= 2 * y && x >= -4 * y) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}