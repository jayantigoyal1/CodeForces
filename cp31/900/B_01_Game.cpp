#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int zeros=0, ones=0;
        for(char c:s){
            if(c=='0') zeros++;
            else ones++;
        }
        if(zeros==0 || ones==0) cout<<"NET"<<endl;
        else if(min(zeros, ones) %2 ==0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
    return 0;

}