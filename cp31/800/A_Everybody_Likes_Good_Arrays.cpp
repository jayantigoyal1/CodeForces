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
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ops=0;
        int len=1;
        for(int i=1; i<n; i++){
            if((arr[i]%2)==(arr[i-1]%2)) len++;
            else{
                ops+=len-1;
                len=1;
            }
        }
        ops+=len-1;
        cout<<ops<<endl;
    }
    return 0;
}