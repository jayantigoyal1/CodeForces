#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        long long x,y;
        cin>>n>>x>>y;
        vector<long long> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        if(x==y){
            long long total=0;
            for(long long v:a) total+=v;
            cout<<total<<endl;
            continue;
        }

        vector<long long> c(n);
        long long total_c=0;

        for(int i=0; i<n; i++){
            c[i]=(a[i]/x)*y;
            total_c +=c[i];
        }

        long long ans=0;
        for(int i=0; i<n; i++){
            long long cur=a[i]+(total_c-c[i]);
            ans=max(ans,cur);
        }
        cout<<ans<<endl;
    }
    return 0;
}
