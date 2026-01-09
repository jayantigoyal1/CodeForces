#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        vector<int> ans;
        ans.push_back(b[0]);
        for(int j =1; j<n; j++){
            if(b[j]>=b[j-1]) ans.push_back(b[j]);
            else{
                ans.push_back(1);
                ans.push_back(b[j]);
            }
        }
        int s=ans.size();
        cout<<s<<endl;
        for(int k=0; k<s; k++){
            cout<<ans[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}