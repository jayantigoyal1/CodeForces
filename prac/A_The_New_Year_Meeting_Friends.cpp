#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    vector<int> v={x1,x2,x3};
    sort(v.begin(), v.end());
    int meet=v[1];
    int dist=abs(v[0]-meet)+ abs(v[2]-meet);
    cout<<dist<<endl;
    return 0;
}