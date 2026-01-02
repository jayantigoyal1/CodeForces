#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0; i<n; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(x==1 && k==1){
            cout<<"NO"<<endl;
        }
        else if(x==1 && k==2){
            if(n%2 != 0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0; i<n/2; i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
            vector<int> ans;
            if(n%2==1){
                ans.push_back(3);
                n-=3;
            }
            while(n>0){
                ans.push_back(2);
                n-=2;
            }
            cout<<ans.size()<<endl;
            for(int num: ans){
                cout<<num<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}