#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<int> arr(m);
        for(int i=0; i<m; i++) cin>>arr[i];
        sort(arr.begin(), arr.end());
        vector<int> gaps;
        for(int i=0; i<m-1; i++){
            gaps.push_back(arr[i+1]-arr[i]-1);
        }
        gaps.push_back(arr[0]+n-arr[m-1]-1);
        sort(gaps.rbegin(), gaps.rend());
        
        int saved=0, days=0;
        for(int gap:gaps){
            int currgap=gap-days*2;
            if(currgap>0){
                saved++;
                currgap-=2;
                if(currgap>0) saved+=currgap;
                days+=2;
            }
        }
        cout<<(n-saved)<<endl;
    }
    return 0;
}