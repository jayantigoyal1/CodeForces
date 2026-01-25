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
        int total2=0;
        for(int num:arr){
            if(num==2) total2++;
        }
        if(total2 % 2 != 0){
            cout<<-1<<endl;
            continue;
        }
        int need=total2/2;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(arr[i]==2) cnt++;
            if(cnt==need){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}