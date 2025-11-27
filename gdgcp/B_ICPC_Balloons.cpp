#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char> seen;
        int balloons=0;
        for(char c:s){
            if(seen.count(c)) balloons+=1;
            else{
                balloons +=2;
                seen.insert(c);
            }
        }
        cout<<balloons<<endl;
    }
    return 0;
}