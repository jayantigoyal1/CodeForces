#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        unordered_set<long long> alive;
        alive.reserve(n * 2);
        for(int i=0; i<n;i++){
            long long x;
            cin>>x;
            alive.insert(x);
        }
        vector<long long> spikes(m);
        for(int i=0; i<m; i++) cin>>spikes[i];
        string instruct;
        cin>>instruct;
        long long shift=0;
        for(int i=0; i<k; i++){
            if(instruct[i]=='L') shift--;
            else shift++;
            for (long long b:spikes) {
                long long target=b-shift;
                if(alive.find(target) != alive.end()){
                    alive.erase(target);
                }
            }
            cout<<alive.size()<<" ";
        }
        cout<<endl;
    }
    return 0;
}
