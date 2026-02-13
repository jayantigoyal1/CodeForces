#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        bool found=false;
        for(int i=0; i<n-2; i++){
            if(a[i+1]>a[i] && a[i+1]>a[i+2]){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<" "<<i+3<<endl;
                found=true;
                break;
            }
        }
        if(!found) cout<<"NO"<<endl;
    }
    return 0;
}