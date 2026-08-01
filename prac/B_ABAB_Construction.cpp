#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string X;
        cin>>X;
        int l=0, r=n-1;
        bool ok=true;
        for(int i=0; i<n; i++){
            char leftChar=(l%2==0 ? 'a':'b');
            char rightChar=(r%2==0 ? 'a':'b');
            if(X[i] == '?') l++;
            else if(X[i] == leftChar) l++;
            else if(X[i] == rightChar) r--;
            else{
                ok=false;
                break;
            }
        }
        cout<<(ok?"YES\n":"NO\n");
    }
    return 0;
}