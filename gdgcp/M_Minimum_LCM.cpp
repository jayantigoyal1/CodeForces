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
        if(n%2==0){
            cout << n/2<<" "<<n/2<<endl;
            continue;
        }
        long long p=-1;
        for(long long d=3; d*d<=n; d+=2){
            if(n%d==0){
                p=d;
                break;
            }
        }
        if(p==-1){
            cout<<1<<" "<<(n-1)<<endl;
        }
        else{
            long long a=n/p;
            long long b=n-a;
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}