#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int cnt=0;
    while(n>0){
        int dig=n%10;
        if(dig==4 || dig==7) cnt++;
        n/=10;
    }
    if(cnt==0){
        cout<<"NO";
        return 0;
    }
    while(cnt>0){
        int dig=cnt%10;
        if(dig!=4 && dig!=7){
            cout<<"NO";
            return 0;
        }
        cnt/=10;
    }
    cout<<"YES";
    return 0;
}