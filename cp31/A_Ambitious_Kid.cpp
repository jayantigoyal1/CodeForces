#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    int ans=INT_MAX;
    bool flag=false;
    for(int i=0; i<N; i++){
        int x;
        cin>>x;
        if(x==0) flag=true;
        ans=min(ans, abs(x));
    }
    if(flag) cout<<0<<endl;
    else cout<<ans<<endl;
    return 0;
}