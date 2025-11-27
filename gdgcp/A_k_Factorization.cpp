#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int>primes;
    int x=n;
    for(int p=2; p*p<=x; p++){
        while(x%p==0){
            primes.push_back(p);
            x/=p;
        }
    }
    if(x>1) primes.push_back(x);
    if((int)primes.size()<k){
        cout <<-1<<endl;
        return 0;
    }
    for(int i=0; i<k-1; i++){
        cout<<primes[i]<<' ';
    }
    long long last=1;
    for(int i=k-1; i<(int)primes.size(); i++){
        last *= primes[i];
    }
    cout<<last<<endl;
    return 0;
}