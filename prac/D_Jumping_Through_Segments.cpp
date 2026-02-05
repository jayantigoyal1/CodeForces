#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> l(n), r(n);
        for(int i=0; i<n; i++){
            cin>>l[i]>>r[i];
        }
        long long low=0, high=1e9, ans=high;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long L=0, R=0;
            bool ok=true;
            for (int i = 0; i < n; i++) {
                long long newL = max(L-mid,l[i]);
                long long newR = min(R+mid,r[i]);
                if(newL>newR){
                    ok=false;
                    break;
                }
                L=newL;
                R=newR;
            }
            if(ok){
                ans=mid;
                high=mid-1;
            }
            else low = mid + 1;
        }
        cout<<ans<<endl;
    }
    return 0;
}