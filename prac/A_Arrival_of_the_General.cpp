#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int first=*max_element(arr.begin(), arr.end());
    int last=*min_element(arr.begin(), arr.end());
    int minInd=-1;
    int maxInd=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==first){
            maxInd=i;
            break;
        }
    }
    for(int i=n; i>=0; i--){
        if(arr[i]==last){
            minInd=i;
            break;
        }
    }
    int swaps=maxInd+(n-1-minInd);
    if(minInd<maxInd) swaps--;
    cout<<swaps;
    return 0;
}