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
        string s;
        cin>>s;
        bool three_cont=false;
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n &&s[i+2]=='.'){
                three_cont=true;
            }
            if(s[i]=='.') cnt++;
        }
        if(three_cont) cout<<2<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}