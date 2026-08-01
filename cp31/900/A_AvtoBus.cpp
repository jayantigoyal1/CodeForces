#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<4 || n%2 != 0) cout<<-1<<endl;
        else{
            long long mini=(n+5)/6;
            long long maxi=n/4;
            cout<<mini<<" "<<maxi<<endl;
        }
    }
    return 0;
}