#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long> a(n+1);
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        vector<long long> b(n+1);
        for(int i=1; i<=n; i++){
            cin>>b[i];
        }
        vector<long long> c(n+2,0);
        for(int i=n; i>=1; i--){
            c[i]=max(c[i+1],b[i]);
        }

        vector<long long> presum(n+1,0);
        for(int i=1; i<=n; i++){
            presum[i]=presum[i-1]+c[i];
        }

        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<presum[r]-presum[l-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}