#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<long long> s;
        for(int i=0; i<n; i++){
            long long x;
            cin>>x;
            s.insert(x);
        }
        vector<long long> v(s.begin(), s.end());
        int ans=0, cur=0;
        for(int i=0; i<(int)v.size(); i++){
            if(i==0 || v[i]==v[i-1]+1) cur++;
            else cur = 1;
            ans = max(ans, cur);
        }
        cout<<min(ans, n)<<endl;
    }
    return 0;
}
