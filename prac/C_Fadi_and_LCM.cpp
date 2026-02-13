#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    while(b!=0){
        long long r=a%b;
        a=b;
        b=r;
    }
    return a;
}

long long lcm(long long a, long long b){
    return a/gcd(a,b)*b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x;
    cin>>x;
    long long besta=1, bestb=x;
    long long maxi=x;
    for(long long a=1; a*a<=x; a++){
        if(x%a==0){
            long long b=x/a;
            if(lcm(a,b)==x){
                long long currmax=max(a,b);
                if(currmax<maxi){
                    maxi=currmax;
                    besta=a;
                    bestb=b;
                }
            }
        }
    }
    cout<<besta<<" "<<bestb<<endl;
    return 0;
}