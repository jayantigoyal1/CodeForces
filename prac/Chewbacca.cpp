#include<bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin>>x;
    for(int i=0; i<x.length(); i++){
        int d=x[i]-'0';
        int inv=9-d;
        if(i==0){
            if(inv!=0 && inv<d){
                x[i]=inv+'0';
            }
        }
        else{
            if(inv<d) x[i]=inv+'0';
        }
    }
    cout<<x<<endl;
    return 0;
}