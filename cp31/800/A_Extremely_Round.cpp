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
        string s=to_string(n);
        int len=s.size();
        int firstdig=s[0]-'0';
        cout<<(9*(len-1)+firstdig)<<endl;
    }
    return 0;
}