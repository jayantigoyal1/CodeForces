#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr;
        arr.push_back(0);
        for(int i=0; i<n; i++){
            int point;
            cin>>point;
            arr.push_back(point);
        }
        arr.push_back(x);
        int ans=arr[0];
        int s=arr.size();
        for(int i=1; i<s; i++){
            if(i==s-1){
                ans=max(ans, 2*(arr[i]-arr[i-1]));
            }
            else ans=max(ans, arr[i]-arr[i-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}