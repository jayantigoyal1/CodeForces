#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> cnt(n+1,0);
    for(int i=2; i<=n; i++){
        if(cnt[i]==0){
            for(int j=i; j<=n; j+=i){
                cnt[j]++;
            }
        }
    }
    int answer=0;
    for(int i=1; i<=n; i++){
        if(cnt[i]==2) answer++;
    }
    cout<<answer<<endl;
    return 0;
}
