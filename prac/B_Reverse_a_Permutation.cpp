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
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            int maxi=arr[i];
            int r=i;
            for(int j=i; j<n; j++){
                if(arr[j]>=maxi){
                    maxi=arr[j];
                    r=j;
                }
            }
            if(r!=i){
                reverse(arr.begin()+i, arr.begin()+r+1);
                break;
            }
        }
        for(int a:arr){
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}