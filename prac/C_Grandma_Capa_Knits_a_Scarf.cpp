#include<bits/stdc++.h>
using namespace std;

int solve(string s, char c){
    int l=0, r=s.size()-1;
    int ans=0;
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else if(s[l]==c){
            l++;
            ans++;
        }
        else if(s[r]==c){
            r--;
            ans++;
        }
        else return INT_MAX;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=INT_MAX;
        for(char c='a'; c<='z'; c++){
            ans=min(ans,solve(s,c));
        }
        if(ans==INT_MAX) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}