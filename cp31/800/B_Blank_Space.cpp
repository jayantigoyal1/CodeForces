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
        int current=0, maxlen=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x==0){
                current++;
                maxlen=max(maxlen,current);
            }
            else{
                current=0;
            }
        }
        cout<<maxlen<<endl;
    }
    return 0;
}