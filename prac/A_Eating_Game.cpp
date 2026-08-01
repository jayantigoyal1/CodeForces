#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum += a[i];
        }
        unordered_set<int> winners;
        for(int i=0; i<n; i++){
            vector<int> curr=a;
            int rem=sum;
            int p=i;
            int last=-1;
            while(rem>0){
                if(curr[p]>0){
                    curr[p]--;
                    rem--;
                    if(rem==0){
                        last=p;
                        break;
                    }
                }
                p=(p+1)%n;
            }
            winners.insert(last);
        }
        cout<<winners.size()<<endl;
    }
    return 0;
}