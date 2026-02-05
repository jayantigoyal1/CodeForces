#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    long long D;
    cin>>N>>D;
    vector<long long> P(N);
    for(int i=0; i<N; i++){
        cin>>P[i];
    }
    sort(P.begin(), P.end());
    int l=0, r=N-1;
    int wins=0;
    while(l<=r){
        long long x =P[r];
        long long need=D/x+1;
        if (r-l+1 >= need) {
            wins++;
            l += (need-1);
            r--;
        }
        else break;
    }
    cout<<wins<<endl;
    return 0;
}
