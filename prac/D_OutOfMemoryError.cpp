#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        long long h;
        cin>>n>>m>>h;
        vector<long long> orig(n), a(n);
        for(int i=0; i<n; i++){
            cin>>orig[i];
            a[i]=orig[i];
        }
        for(int i=0; i<m; i++){
            int b;
            long long c;
            cin >> b >> c;
            b--;
            a[b] += c;
            if(a[b]>h){
                a=orig;
            }
        }
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
